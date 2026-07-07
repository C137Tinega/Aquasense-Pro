#include "HttpClientManager.h"

#include "Config.h"
#include "Logger.h"

void HttpClientManager::begin()
{
    Logger::info("HTTP", "HTTP Client Initialized");
}

bool HttpClientManager::uploadSensorData(const String& json)
{
    Logger::info("HTTP", "Preparing upload...");

    Logger::info("HTTP", API_BASE_URL);

    Logger::info("HTTP", SENSOR_ENDPOINT);

    Logger::info("HTTP", json.c_str());

    // Placeholder until ESP32 hardware arrives.
    return true;
}