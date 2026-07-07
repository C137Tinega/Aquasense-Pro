#ifndef SENSOR_MANAGER_H
#define SENSOR_MANAGER_H

#include <Arduino.h>

/*
============================================================
 Sensor Reading
 Represents a single sensor measurement.
============================================================
*/
struct SensorReading
{
    float value = 0.0f;
    bool isValid = true;
};

/*
============================================================
 Sensor Data
 Contains one complete set of readings from AquaSense.
============================================================
*/
struct SensorData
{
    SensorReading waterTemperature;
    SensorReading pH;
    SensorReading dissolvedOxygen;
    SensorReading tds;
    SensorReading airTemperature;
    SensorReading humidity;

    unsigned long timestamp = 0;
};

class SensorManager
{
public:

    static void begin();

    static SensorData readAll();
};

#endif