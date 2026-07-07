#ifndef CONFIG_H
#define CONFIG_H

#include <Arduino.h>

/*
============================================================
 AquaSense Pro
 Global Configuration
============================================================
*/

//----------------------------------------------------------
// Project Information
//----------------------------------------------------------
constexpr char PROJECT_NAME[] = "AquaSense Pro";
constexpr char PROJECT_VERSION[] = "1.0.0";

//----------------------------------------------------------
// Serial Communication
//----------------------------------------------------------
constexpr uint32_t SERIAL_BAUD_RATE = 115200;

//----------------------------------------------------------
// Timing
//----------------------------------------------------------
constexpr uint32_t SENSOR_READ_INTERVAL_MS = 3000;

//----------------------------------------------------------
// Water Quality Limits
//----------------------------------------------------------
constexpr float MIN_WATER_TEMP = 0.0f;
constexpr float MAX_WATER_TEMP = 50.0f;

constexpr float MIN_PH = 0.0f;
constexpr float MAX_PH = 14.0f;

constexpr float MIN_DO = 0.0f;
constexpr float MAX_DO = 20.0f;

constexpr float MIN_TDS = 0.0f;
constexpr float MAX_TDS = 5000.0f;

//----------------------------------------------------------
// Environment Limits
//----------------------------------------------------------
constexpr float MIN_AIR_TEMP = -20.0f;
constexpr float MAX_AIR_TEMP = 80.0f;

constexpr float MIN_HUMIDITY = 0.0f;
constexpr float MAX_HUMIDITY = 100.0f;

#endif