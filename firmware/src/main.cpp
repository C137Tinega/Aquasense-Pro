#include <Arduino.h>

#include "Config.h"
#include "Logger.h"

void setup()
{
    Logger::begin(SERIAL_BAUD_RATE);

    Logger::info(PROJECT_NAME);
    Logger::info("Firmware Boot Successful");
}

void loop()
{
    Logger::info("ESP32 is running.");

    delay(1000);
}