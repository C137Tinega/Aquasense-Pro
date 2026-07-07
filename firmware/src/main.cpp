/*
============================================================
 AquaSense Pro
 Main Application
============================================================
*/

#include <Arduino.h>

#include "AlarmManager.h"
#include "Config.h"
#include "DataValidator.h"
#include "Logger.h"
#include "SensorManager.h"

void setup()
{
    Logger::begin(SERIAL_BAUD_RATE);

    Logger::info("System", PROJECT_NAME);
    Logger::info("System", "Firmware Boot Successful");

    SensorManager::begin();
    AlarmManager::begin();

    Logger::info("System", "Initialization Complete");
}

void loop()
{
    SensorData data = SensorManager::readAll();

    if (DataValidator::validate(data))
    {
        Logger::info("Validator", "Sensor data valid.");
    }
    else
    {
        Logger::warning("Validator", "Invalid sensor data.");
    }

    AlarmManager::check(data);

    delay(SENSOR_READ_INTERVAL_MS);
}