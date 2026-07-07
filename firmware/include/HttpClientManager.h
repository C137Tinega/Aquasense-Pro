#ifndef HTTP_CLIENT_MANAGER_H
#define HTTP_CLIENT_MANAGER_H

#include <Arduino.h>

/*
============================================================
HttpClientManager

Purpose:
Handles communication between the ESP32 and the backend API.

Responsibilities:
- Send HTTP POST requests
- Receive responses
- Return whether the request succeeded

It DOES NOT:
- Read sensors
- Build JSON
- Manage Wi-Fi
============================================================
*/

class HttpClientManager
{
public:

    static void begin();

    static bool postJson(const String& endpoint,
                         const String& json);

};

#endif