#ifndef DATA_QUEUE_H
#define DATA_QUEUE_H

#include <vector>

#include "SensorManager.h"

class DataQueue
{
public:

    static void begin();

    static void enqueue(const SensorData& data);

    static bool isEmpty();

    static size_t size();

    static SensorData front();

    static void dequeue();

private:

    static std::vector<SensorData> queue;
};

#endif