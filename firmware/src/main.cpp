/*
============================================================
 AquaSense Pro
 Main Application
============================================================
*/

#include <Arduino.h>

#include "AlarmManager.h"
#include "Config.h"
#include "DataQueue.h"
#include "DataValidator.h"
#include "DisplayManager.h"
#include "Logger.h"
#include "SensorManager.h"

void setup()
{
    Logger::begin(SERIAL_BAUD_RATE);

    Logger::info("System", PROJECT_NAME);
    Logger::info("System", "Firmware Boot Successful");

    SensorManager::begin();
    AlarmManager::begin();
    DisplayManager::begin();
    DataQueue::begin();

    Logger::info("System", "Initialization Complete");
}

void loop()
{
    SensorData data = SensorManager::readAll();

    if (DataValidator::validate(data))
    {
        Logger::info("Validator", "Sensor data valid.");

        // Store the reading
        DataQueue::enqueue(data);

        Logger::info(
            "Queue",
            ("Queue Size: " + String(DataQueue::size())).c_str()
        );
    }
    else
    {
        Logger::warning("Validator", "Invalid sensor data.");
    }

    AlarmManager::check(data);

    DisplayManager::showSensorData(data);

    delay(SENSOR_READ_INTERVAL_MS);
}