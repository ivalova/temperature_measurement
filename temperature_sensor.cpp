#include "temperature_sensor.h"

temperatureSensor::temperatureSensor()
  : oneWire(sensorPin), sensors(&oneWire)
{
  // Start up the library
  sensors.begin();
}

float temperatureSensor::getTemperature(void)
{
  sensors.requestTemperatures();
  
  return sensors.getTempCByIndex(0);
}
