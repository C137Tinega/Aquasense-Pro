#include "CloudManager.h"

#include "DataQueue.h"
#include "Logger.h"

void CloudManager::begin()
{
    Logger::info("Cloud", "Cloud Manager Initialized");
}

void CloudManager::process()
{
    if (DataQueue::isEmpty())
    {
        return;
    }

    SensorData data = DataQueue::front();

    // Upload will be implemented later.

    Logger::info(
        "Cloud",
        "Pretending to upload one sensor reading."
    );

    DataQueue::dequeue();
}