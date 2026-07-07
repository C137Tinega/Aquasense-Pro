#ifndef LOGGER_H
#define LOGGER_H

#include <Arduino.h>

enum class LogLevel
{
    INFO,
    WARNING,
    ERROR
};

class Logger
{
public:

    static void begin(unsigned long baudRate);

    static void log(
        LogLevel level,
        const String& module,
        const String& message);

    static void info(
        const String& module,
        const String& message);

    static void warning(
        const String& module,
        const String& message);

    static void error(
        const String& module,
        const String& message);
};

#endif