#include "DataQueue.h"

std::vector<SensorData> DataQueue::queue;

void DataQueue::begin()
{
    queue.clear();
}

void DataQueue::enqueue(const SensorData& data)
{
    queue.push_back(data);
}

bool DataQueue::isEmpty()
{
    return queue.empty();
}

size_t DataQueue::size()
{
    return queue.size();
}

SensorData DataQueue::front()
{
    return queue.front();
}

void DataQueue::dequeue()
{
    if (!queue.empty())
    {
        queue.erase(queue.begin());
    }
}