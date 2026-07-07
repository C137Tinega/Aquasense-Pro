#include "Logger.h"

void Logger::begin(unsigned long baudRate)
{
    Serial.begin(baudRate);

    Serial.println();
    Serial.println("=================================");
    Serial.println(" Logger Started");
    Serial.println("=================================");
}

void Logger::info(const String& message)
{
    Serial.print("[INFO] ");
    Serial.println(message);
}

void Logger::warning(const String& message)
{
    Serial.print("[WARNING] ");
    Serial.println(message);
}

void Logger::error(const String& message)
{
    Serial.print("[ERROR] ");
    Serial.println(message);
}