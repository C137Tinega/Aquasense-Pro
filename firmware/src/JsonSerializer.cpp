#include "JsonSerializer.h"

#include <ArduinoJson.h>

#include "Config.h"

/*
============================================================
JsonSerializer Implementation
============================================================
*/

String JsonSerializer::serialize(const SensorData& data)
{
    // Create an empty JSON document.
    JsonDocument doc;

    // Device information
    doc["device_id"] = DEVICE_ID;
    doc["firmware_version"] = FIRMWARE_VERSION;

    // Timestamp
    doc["timestamp"] = data.timestamp;

    // Water parameters
    doc["water_temperature"] = data.waterTemperature.value;
    doc["ph"] = data.pH.value;
    doc["dissolved_oxygen"] = data.dissolvedOxygen.value;
    doc["tds"] = data.tds.value;

    // Environmental parameters
    doc["air_temperature"] = data.airTemperature.value;
    doc["humidity"] = data.humidity.value;

    // Convert JSON document into a String
    String json;

    serializeJson(doc, json);

    return json;
}