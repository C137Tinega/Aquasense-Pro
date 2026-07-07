#ifndef JSON_SERIALIZER_H
#define JSON_SERIALIZER_H

#include <Arduino.h>
#include "SensorManager.h"

/*
============================================================
JsonSerializer

Responsibility:
Convert SensorData objects into JSON strings that can
be sent to the FastAPI backend.
============================================================
*/

class JsonSerializer
{
public:

    /*
    --------------------------------------------------------
    serialize()

    Converts one SensorData object into a JSON string.

    Returns:
        Arduino String containing JSON.
    --------------------------------------------------------
    */
    static String serialize(const SensorData& data);
};

#endif