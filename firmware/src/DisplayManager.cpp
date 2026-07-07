#include "DisplayManager.h"

#include <Arduino.h>

#include "Logger.h"

void DisplayManager::begin()
{
    Logger::info("Display", "Display Manager Initialized");
}

void DisplayManager::showSensorData(const SensorData& data)
{
    Serial.println();
    Serial.println("======================================");
    Serial.println("        AquaSense Pro");
    Serial.println("======================================");

    Serial.print("Time: ");
    Serial.println(data.timestamp);

    Serial.print("Water Temp : ");
    Serial.print(data.waterTemperature.value);
    Serial.println(" C");

    Serial.print("pH         : ");
    Serial.println(data.pH.value);

    Serial.print("DO         : ");
    Serial.print(data.dissolvedOxygen.value);
    Serial.println(" mg/L");

    Serial.print("TDS        : ");
    Serial.print(data.tds.value);
    Serial.println(" ppm");

    Serial.print("Air Temp   : ");
    Serial.print(data.airTemperature.value);
    Serial.println(" C");

    Serial.print("Humidity   : ");
    Serial.print(data.humidity.value);
    Serial.println(" %");

    Serial.println("======================================");
}