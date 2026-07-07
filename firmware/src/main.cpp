#include <Arduino.h>
#include "Config.h"

void setup()
{
    Serial.begin(SERIAL_BAUD_RATE);

    Serial.println();
    Serial.println("=================================");
    Serial.print(PROJECT_NAME);
    Serial.print(" v");
    Serial.println(PROJECT_VERSION);
    Serial.println("Firmware Boot Successful");
    Serial.println("=================================");
}

void loop()
{
    Serial.println("ESP32 is running...");
    delay(1000);
}