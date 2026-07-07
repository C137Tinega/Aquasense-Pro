#include "SensorManager.h"

void SensorManager::begin()
{
    // Hardware initialization will go here later.
}

SensorData SensorManager::readAll()
{
    SensorData data;

    // Temporary simulated values
    data.waterTemperature = 26.4;
    data.pH = 7.1;
    data.dissolvedOxygen = 6.8;
    data.tds = 340.0;
    data.airTemperature = 24.0;
    data.humidity = 62.0;

    return data;
}