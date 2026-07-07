#ifndef DATA_VALIDATOR_H
#define DATA_VALIDATOR_H

#include "SensorManager.h"

class DataValidator
{
public:

    // Returns true if every sensor reading is valid.
    static bool validate(SensorData& data);

private:

    static bool validateTemperature(float value);
    static bool validatePH(float value);
    static bool validateDO(float value);
    static bool validateTDS(float value);
    static bool validateHumidity(float value);
    static bool validateAirTemperature(float value);
};

#endif