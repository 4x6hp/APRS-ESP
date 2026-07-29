#ifndef BME280_H
#define BME280_H

#include <Adafruit_Sensor.h>
#include <Adafruit_BME280.h>

// Clean structure to store simple float values
struct BMEData {
    float temperature;
    float humidity;
    float pressure;
};

// Function declarations
bool initBME280();
BMEData readBME280Data();

#endif // BME280_H
