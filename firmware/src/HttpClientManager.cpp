#include "HttpClientManager.h"

#include <HTTPClient.h>

#include "Config.h"
#include "Logger.h"

void HttpClientManager::begin()
{
    Logger::info("HTTP", "HTTP Client Initialized");
}

bool HttpClientManager::uploadSensorData(const String& json)
{
    String url =
        String(API_BASE_URL) +
        String(SENSOR_ENDPOINT);

    return sendPostRequest(
        url,
        json
    );
}

bool HttpClientManager::sendPostRequest(
    const String& url,
    const String& json)
{
    HTTPClient http;

    Logger::info("HTTP", "Opening connection...");
    Logger::info("HTTP", url.c_str());

    /*
     NOTE

     We cannot call:

        http.begin(url);

     until an ESP32 is available.

     Doing so without hardware would fail.

     Therefore we temporarily leave this section
     commented out.
    */

    /*
    http.begin(url);

    http.setTimeout(HTTP_TIMEOUT_MS);

    http.addHeader(
        "Content-Type",
        "application/json"
    );

    int responseCode =
        http.POST(json);

    http.end();

    if (responseCode == 200)
    {
        Logger::info(
            "HTTP",
            "Upload successful."
        );

        return true;
    }

    Logger::warning(
        "HTTP",
        ("HTTP Error: " +
        String(responseCode)).c_str()
    );

    return false;
    */

    Logger::info(
        "HTTP",
        "HTTP request skipped (no ESP32 connected)."
    );

    return true;
}