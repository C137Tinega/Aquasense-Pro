#ifndef DISPLAY_MANAGER_H
#define DISPLAY_MANAGER_H

#include "SensorManager.h"

class DisplayManager
{
public:

    static void begin();

    static void showSensorData(const SensorData& data);

};

#endif