#include "AlarmManager.h"

#include "Logger.h"

void AlarmManager::begin()
{
    Logger::info("Alarm", "Alarm Manager Initialized");
}

void AlarmManager::check(const SensorData& data)
{
    if (!data.dissolvedOxygen.isValid)
    {
        Logger::error("Alarm", "DO sensor is invalid.");
        return;
    }

    if (data.dissolvedOxygen.value < 5.0f)
    {
        Logger::warning(
            "Alarm",
            "Low dissolved oxygen detected!"
        );
    }

    if (data.waterTemperature.value > 32.0f)
    {
        Logger::warning(
            "Alarm",
            "High water temperature detected!"
        );
    }

    if (data.pH.value < 6.5f || data.pH.value > 8.5f)
    {
        Logger::warning(
            "Alarm",
            "Water pH is outside the recommended range."
        );
    }
}