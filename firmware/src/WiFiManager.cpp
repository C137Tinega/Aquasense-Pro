#include "WiFiManager.h"

#include "Logger.h"

void WiFiManager::begin()
{
    Logger::info("WiFi", "WiFi Manager Initialized");
}

void WiFiManager::update()
{
    // Real Wi-Fi connection logic will be added
    // once the ESP32 hardware is available.
}

bool WiFiManager::isConnected()
{
    // Temporary placeholder.
    return true;
}