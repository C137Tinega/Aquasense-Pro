#include "CloudManager.h"

#include "Config.h"
#include "DataQueue.h"
#include "HttpClientManager.h"
#include "JsonSerializer.h"
#include "Logger.h"
#include "WiFiManager.h"

void CloudManager::begin()
{
    Logger::info("Cloud", "Cloud Manager Initialized");
}

void CloudManager::process()
{
    if (!WiFiManager::isConnected())
    {
        Logger::warning("Cloud", "WiFi unavailable.");
        return;
    }

    if (DataQueue::isEmpty())
    {
        return;
    }

    SensorData data = DataQueue::front();

    String json =
        JsonSerializer::serialize(data);

    bool success =
    HttpClientManager::uploadSensorData(json);

    if (success)
    {
        Logger::info(
            "Cloud",
            "Upload successful."
        );

        DataQueue::dequeue();
    }
    else
    {
        Logger::warning(
            "Cloud",
            "Upload failed."
        );
    }
}