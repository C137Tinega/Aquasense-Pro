#include "Logger.h"

void Logger::begin(unsigned long baudRate)
{
    Serial.begin(baudRate);

    Serial.println();
    Serial.println("=================================");
    Serial.println(" AquaSense Logger Started");
    Serial.println("=================================");
}

void Logger::log(
    LogLevel level,
    const String& module,
    const String& message)
{
    switch(level)
    {
        case LogLevel::INFO:
            Serial.print("[INFO] ");
            break;

        case LogLevel::WARNING:
            Serial.print("[WARNING] ");
            break;

        case LogLevel::ERROR:
            Serial.print("[ERROR] ");
            break;
    }

    Serial.print("[");
    Serial.print(module);
    Serial.print("] ");

    Serial.println(message);
}

void Logger::info(
    const String& module,
    const String& message)
{
    log(LogLevel::INFO, module, message);
}

void Logger::warning(
    const String& module,
    const String& message)
{
    log(LogLevel::WARNING, module, message);
}

void Logger::error(
    const String& module,
    const String& message)
{
    log(LogLevel::ERROR, module, message);
}