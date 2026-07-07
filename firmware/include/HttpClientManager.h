#ifndef HTTP_CLIENT_MANAGER_H
#define HTTP_CLIENT_MANAGER_H

#include <Arduino.h>

/*
============================================================
HttpClientManager

Responsible for sending HTTP requests
to the AquaSense backend.
============================================================
*/

class HttpClientManager
{
public:

    static void begin();

    /*
    Upload one sensor reading.

    Returns true if the backend accepted it.
    */
    static bool uploadSensorData(const String& json);

};

#endif