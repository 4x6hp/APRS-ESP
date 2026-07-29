#include "bme280.h"

#define BME280_I2C_ADDRESS 0x76

Adafruit_BME280 bme; 

bool initBME280() {
    if (!bme.begin(BME280_I2C_ADDRESS)) {
        return false; 
    }
    return true; 
}

// Directly extracts raw float measurements from the driver
BMEData readBME280Data() {
    BMEData data;
    data.temperature = bme.readTemperature();          // Returns Celsius
    data.humidity = bme.readHumidity();                // Returns % Relative Humidity
    data.pressure = bme.readPressure() / 100.0F;       // Converts Pascal (Pa) to Hectopascal (hPa)
    return data;
}
