#include "DataValidator.h"
#include "Config.h"

bool DataValidator::validate(SensorData& data)
{
    data.waterTemperature.isValid = validateTemperature(data.waterTemperature.value);
    data.pH.isValid = validatePH(data.pH.value);
    data.dissolvedOxygen.isValid = validateDO(data.dissolvedOxygen.value);
    data.tds.isValid = validateTDS(data.tds.value);
    data.airTemperature.isValid = validateAirTemperature(data.airTemperature.value);
    data.humidity.isValid = validateHumidity(data.humidity.value);

    return data.waterTemperature.isValid &&
           data.pH.isValid &&
           data.dissolvedOxygen.isValid &&
           data.tds.isValid &&
           data.airTemperature.isValid &&
           data.humidity.isValid;
}

bool DataValidator::validateTemperature(float value)
{
    return value >= MIN_WATER_TEMP && value <= MAX_WATER_TEMP;
}

bool DataValidator::validatePH(float value)
{
    return value >= MIN_PH && value <= MAX_PH;
}

bool DataValidator::validateDO(float value)
{
    return value >= MIN_DO && value <= MAX_DO;
}

bool DataValidator::validateTDS(float value)
{
    return value >= MIN_TDS && value <= MAX_TDS;
}

bool DataValidator::validateAirTemperature(float value)
{
    return value >= MIN_AIR_TEMP && value <= MAX_AIR_TEMP;
}

bool DataValidator::validateHumidity(float value)
{
    return value >= MIN_HUMIDITY && value <= MAX_HUMIDITY;
}