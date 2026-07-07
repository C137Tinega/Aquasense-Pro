#ifndef SENSOR_MANAGER_H
#define SENSOR_MANAGER_H

#include <Arduino.h>

struct SensorData
{
    float waterTemperature = 0.0f;

    float pH = 0.0f;

    float dissolvedOxygen = 0.0f;

    float tds = 0.0f;

    float airTemperature = 0.0f;

    float humidity = 0.0f;

    unsigned long timestamp = 0;
};

class SensorManager
{
public:
    static void begin();

    static SensorData readAll();
};

#endif