#ifndef LOGGER_H
#define LOGGER_H

#include <Arduino.h>

class Logger
{
public:

    // Initializes the logger.
    static void begin(unsigned long baudRate);

    // Prints an informational message.
    static void info(const String& message);

    // Prints a warning.
    static void warning(const String& message);

    // Prints an error.
    static void error(const String& message);
};

#endif