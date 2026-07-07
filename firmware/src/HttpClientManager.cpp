#include "HttpClientManager.h"

#include "Logger.h"

/*
============================================================
HttpClientManager Implementation
============================================================
*/

void HttpClientManager::begin()
{
    Logger::info("HTTP", "HTTP Client Initialized");
}

bool HttpClientManager::postJson(const String& endpoint,
                                 const String& json)
{
    // Real HTTP implementation will come
    // after the ESP32 hardware arrives.

    Logger::info("HTTP", "POST Request");

    Logger::info("HTTP", endpoint.c_str());

    Logger::info("HTTP", json.c_str());

    return true;
}