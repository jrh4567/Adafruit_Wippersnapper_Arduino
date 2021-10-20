/*!
 * @file WipperSnapper_I2C_Driver.h
 *
 * Base implementation for I2C device drivers.
 *
 * Adafruit invests time and resources providing this open source code,
 * please support Adafruit and open-source hardware by purchasing
 * products from Adafruit!
 *
 * Copyright (c) Brent Rubell 2021 for Adafruit Industries.
 *
 * MIT license, all text here must be included in any redistribution.
 *
 */

#ifndef WipperSnapper_I2C_Driver_H
#define WipperSnapper_I2C_Driver_H

#include "Wippersnapper.h"

/**************************************************************************/
/*!
    @brief  Base class for I2C Drivers.
*/
/**************************************************************************/
class WipperSnapper_I2C_Driver {

public:
  /*******************************************************************************/
  /*!
      @brief    Constructor for an I2C sensor.
  */
  /*******************************************************************************/
  WipperSnapper_I2C_Driver(TwoWire *_i2c, uint16_t sensorAddress) {
    _sensorAddress = sensorAddress;
  }

  /*******************************************************************************/
  /*!
      @brief    Destructor for an I2C sensor.
  */
  /*******************************************************************************/
  ~WipperSnapper_I2C_Driver() {
    _sensorAddress = 0;
  }

  /*******************************************************************************/
  /*!
      @brief    Gets the initialization status of an I2C driver.
      @returns  True if I2C driver is initialized successfully, False otherwise.
  */
  /*******************************************************************************/
  bool getInitialized() { return _isInitialized; }

  /*********************************************************************************/
  /*!
      @brief    Base implementation - Returns the humidity sensor's period, if set.
  */
  /*********************************************************************************/
  virtual long getTempSensorPeriod() {
    return _tempSensorPeriod;
  }

  /*******************************************************************************/
  /*!
      @brief    Set the temperature sensor's return frequency.
      @param    tempPeriod
                The time interval at which to return new data from the temperature
                sensor.
  */
  /*******************************************************************************/
  virtual void setTemperatureSensorPeriod(float tempPeriod) {
    // Period is in seconds, cast it to long and convert it to milliseconds
    _tempSensorPeriod = (long)tempPeriod * 1000;
  }

  /*******************************************************************************/
  /*!
      @brief    Base implementation - Reads a temperature sensor and converts
                the reading into the expected SI unit.
  */
  /*******************************************************************************/
  virtual void updateTemperatureSensor(float *temperature) {
    // no-op
  }


  /*********************************************************************************/
  /*!
      @brief    Base implementation - Returns the humidity sensor's period, if set.
  */
  /*********************************************************************************/
  virtual long getHumidSensorPeriod() {
    return _humidSensorPeriod;
  }

  /*******************************************************************************/
  /*!
      @brief    Set the humidity sensor's return frequency.
      @param    humidPeriod
                The time interval at which to return new data from the humidity
                sensor.
  */
  /*******************************************************************************/
  void setHumiditySensorPeriod(float humidPeriod) {
    // Period is in seconds, cast it to long and convert it to milliseconds
    _humidSensorPeriod = (long)humidPeriod * 1000;
  }

  /*******************************************************************************/
  /*!
      @brief    Base implementation - Reads a humidity sensor and converts
                the reading into the expected SI unit.
  */
  /*******************************************************************************/
  virtual void updateHumiditySensor(float *humidity) {
    // no-op
  }

protected:
  bool _isInitialized = false; ///< True if the I2C device was initialized successfully, False otherwise.
  uint16_t _sensorAddress; ///< The I2C device's unique I2C address.
  long _tempSensorPeriod = -1L;
  long _humidSensorPeriod = -1L;
  long _tempSensorPeriodPrv;
  long _humidSensorPeriodPrv;
};

#endif // WipperSnapper_I2C_Driver_H