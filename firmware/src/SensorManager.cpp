#include "SensorManager.h"

void SensorManager::begin()
{
    // Hardware initialization will be added later.
}

SensorData SensorManager::readAll()
{
    SensorData data;

    data.timestamp = millis();

    // Simulated sensor readings
    data.waterTemperature.value = 26.4f;
    data.pH.value = 7.1f;
    data.dissolvedOxygen.value = 6.8f;
    data.tds.value = 340.0f;
    data.airTemperature.value = 24.0f;
    data.humidity.value = 62.0f;

    return data;
}