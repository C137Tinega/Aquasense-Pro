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
    // Start the serial logger
    Logger::begin(SERIAL_BAUD_RATE);

    Logger::info("System", PROJECT_NAME);
    Logger::info("System", "Firmware Boot Successful");

    // Initialize all sensors
    SensorManager::begin();

    Logger::info("System", "Sensor Manager Initialized");
}

void loop()
{
    // Read all sensor values
    SensorData data = SensorManager::readAll();

    // Validate the sensor readings
    if (DataValidator::validate(data))
    {
        Logger::info("Validator", "All sensor values are valid.");

        Serial.println("----------------------------------------");
        Serial.print("Timestamp: ");
        Serial.println(data.timestamp);

        Serial.print("Water Temperature: ");
        Serial.print(data.waterTemperature);
        Serial.println(" °C");

        Serial.print("pH: ");
        Serial.println(data.pH);

        Serial.print("Dissolved Oxygen: ");
        Serial.print(data.dissolvedOxygen);
        Serial.println(" mg/L");

        Serial.print("TDS: ");
        Serial.print(data.tds);
        Serial.println(" ppm");

        Serial.print("Air Temperature: ");
        Serial.print(data.airTemperature);
        Serial.println(" °C");

        Serial.print("Humidity: ");
        Serial.print(data.humidity);
        Serial.println(" %");

        Serial.println("----------------------------------------");
        Serial.println();
    }
    else
    {
        Logger::error("Validator", "Invalid sensor data detected.");
    }

    // Wait before the next reading
    delay(3000);
}