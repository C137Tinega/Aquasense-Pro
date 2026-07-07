#ifndef CONFIG_H
#define CONFIG_H

/*
============================================================
 AquaSense Pro
 Global Configuration
============================================================
*/

#include <Arduino.h>

//----------------------------------------------------------
// Project Information
//----------------------------------------------------------
constexpr char PROJECT_NAME[] = "AquaSense Pro";
constexpr char PROJECT_VERSION[] = "1.0.0";

//----------------------------------------------------------
// Serial Communication
//----------------------------------------------------------
constexpr uint32_t SERIAL_BAUD_RATE = 115200;

#endif