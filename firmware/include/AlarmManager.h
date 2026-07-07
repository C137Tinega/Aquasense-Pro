#ifndef ALARM_MANAGER_H
#define ALARM_MANAGER_H

#include "SensorManager.h"

class AlarmManager
{
public:

    static void begin();

    static void check(const SensorData& data);

};

#endif