#include <Arduino.h>

/*
============================================================
AquaSense Pro Firmware

This is the main entry point for the ESP32.

Author: TJ
Project: AquaSense Pro
============================================================
*/

//-----------------------------------------------------------
// Runs once when the ESP32 starts.
//-----------------------------------------------------------
void setup()
{
    // Start serial communication at 115200 baud.
    Serial.begin(115200);

    Serial.println();
    Serial.println("=================================");
    Serial.println(" AquaSense Pro Firmware Started ");
    Serial.println("=================================");
}

//-----------------------------------------------------------
// Runs forever.
//-----------------------------------------------------------
void loop()
{
    Serial.println("ESP32 is running...");

    // Wait one second.
    delay(1000);
}