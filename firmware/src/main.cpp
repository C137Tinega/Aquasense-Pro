/*
============================================================
 AquaSense Pro
 Main Application
============================================================
*/

#include <Arduino.h>

#include "AlarmManager.h"
#include "CloudManager.h"
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
    CloudManager::begin();

    Logger::info("System", "Initialization Complete");
}

void loop()
{
    SensorData data = SensorManager::readAll();

    if (DataValidator::validate(data))
    {
        DataQueue::enqueue(data);
    }

    AlarmManager::check(data);

    CloudManager::process();

    DisplayManager::showSensorData(data);

    delay(SENSOR_READ_INTERVAL_MS);
}