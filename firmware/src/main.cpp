/*
============================================================
 AquaSense Pro
 Main Application
============================================================
*/

#include <Arduino.h>

#include "Config.h"
#include "Logger.h"
#include "SensorManager.h"
#include "DataValidator.h"

void setup()
{
    Logger::begin(SERIAL_BAUD_RATE);

    Logger::info("System", PROJECT_NAME);
    Logger::info("System", "Firmware Boot Successful");

    SensorManager::begin();

    Logger::info("System", "Sensor Manager Initialized");
}

void loop()
{
    SensorData data = SensorManager::readAll();

    if (DataValidator::validate(data))
    {
        Logger::info("Validator", "All sensor values are valid.");
    }
    else
    {
        Logger::warning("Validator", "One or more sensor values are invalid.");
    }

    Serial.println("----------------------------------------");
    Serial.print("Timestamp: ");
    Serial.println(data.timestamp);

    Serial.print("Water Temperature: ");
    Serial.print(data.waterTemperature.value);
    Serial.print(" °C");

    Serial.print("  [");
    Serial.print(data.waterTemperature.isValid ? "OK" : "INVALID");
    Serial.println("]");

    Serial.print("pH: ");
    Serial.print(data.pH.value);
    Serial.print("  [");
    Serial.print(data.pH.isValid ? "OK" : "INVALID");
    Serial.println("]");

    Serial.print("Dissolved Oxygen: ");
    Serial.print(data.dissolvedOxygen.value);
    Serial.print(" mg/L");
    Serial.print("  [");
    Serial.print(data.dissolvedOxygen.isValid ? "OK" : "INVALID");
    Serial.println("]");

    Serial.println("----------------------------------------");
    Serial.println();

    delay(SENSOR_READ_INTERVAL_MS);
}