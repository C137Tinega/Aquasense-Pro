#ifndef CONFIG_H
#define CONFIG_H

#include <Arduino.h>

/*
============================================================
AquaSense Configuration
============================================================
*/

//------------------------------------------------------------
// Project
//------------------------------------------------------------

constexpr char PROJECT_NAME[] = "AquaSense Pro";
constexpr char PROJECT_VERSION[] = "1.0.0";

constexpr char DEVICE_ID[] = "aquasense-001";
constexpr char FIRMWARE_VERSION[] = "1.0.0";

//------------------------------------------------------------
// Serial
//------------------------------------------------------------

constexpr uint32_t SERIAL_BAUD_RATE = 115200;

//------------------------------------------------------------
// Timing
//------------------------------------------------------------

constexpr uint32_t SENSOR_READ_INTERVAL_MS = 3000;

//------------------------------------------------------------
// Wi-Fi
//------------------------------------------------------------

constexpr char WIFI_SSID[] = "YOUR_WIFI_NAME";
constexpr char WIFI_PASSWORD[] = "YOUR_WIFI_PASSWORD";

//------------------------------------------------------------
// Backend
//------------------------------------------------------------

// Local development server
constexpr char API_BASE_URL[] = "http://192.168.1.100:8000";

// API endpoint
constexpr char SENSOR_ENDPOINT[] = "/api/v1/sensors";

// HTTP timeout
constexpr uint32_t HTTP_TIMEOUT_MS = 10000;

//------------------------------------------------------------
// Sensor Limits
//------------------------------------------------------------

constexpr float MIN_WATER_TEMP = 0.0f;
constexpr float MAX_WATER_TEMP = 50.0f;

constexpr float MIN_PH = 0.0f;
constexpr float MAX_PH = 14.0f;

constexpr float MIN_DO = 0.0f;
constexpr float MAX_DO = 20.0f;

constexpr float MIN_TDS = 0.0f;
constexpr float MAX_TDS = 5000.0f;

constexpr float MIN_AIR_TEMP = -20.0f;
constexpr float MAX_AIR_TEMP = 80.0f;

constexpr float MIN_HUMIDITY = 0.0f;
constexpr float MAX_HUMIDITY = 100.0f;

#endif