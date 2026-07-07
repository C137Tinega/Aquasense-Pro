#ifndef HTTP_CLIENT_MANAGER_H
#define HTTP_CLIENT_MANAGER_H

#include <Arduino.h>

/*
============================================================
HttpClientManager

Responsible for:
- Sending HTTP POST requests
- Receiving responses
- Returning upload status

This class DOES NOT:
- Read sensors
- Build JSON
- Manage Wi-Fi
============================================================
*/

class HttpClientManager
{
public:

    static void begin();

    static bool uploadSensorData(const String& json);

private:

    static bool sendPostRequest(
        const String& url,
        const String& json
    );

};

#endif