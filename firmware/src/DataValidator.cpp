#include "DataValidator.h"

bool DataValidator::validate(SensorData& data)
{
    bool valid = true;

    valid &= validateTemperature(data.waterTemperature);
    valid &= validatePH(data.pH);
    valid &= validateDO(data.dissolvedOxygen);
    valid &= validateTDS(data.tds);
    valid &= validateAirTemperature(data.airTemperature);
    valid &= validateHumidity(data.humidity);

    return valid;
}

bool DataValidator::validateTemperature(float value)
{
    return value >= 0.0f && value <= 50.0f;
}

bool DataValidator::validatePH(float value)
{
    return value >= 0.0f && value <= 14.0f;
}

bool DataValidator::validateDO(float value)
{
    return value >= 0.0f && value <= 20.0f;
}

bool DataValidator::validateTDS(float value)
{
    return value >= 0.0f && value <= 5000.0f;
}

bool DataValidator::validateAirTemperature(float value)
{
    return value >= -20.0f && value <= 80.0f;
}

bool DataValidator::validateHumidity(float value)
{
    return value >= 0.0f && value <= 100.0f;
}