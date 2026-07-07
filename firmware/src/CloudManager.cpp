#include "CloudManager.h"

#include "DataQueue.h"
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

    Logger::info(
        "Cloud",
        "Uploading sensor reading..."
    );

    // Future HTTP POST goes here.

    DataQueue::dequeue();

    Logger::info(
        "Cloud",
        "Upload successful."
    );
}