/**
 * @file SparkFun_HowTo_Arduino_Library.h
 * @brief Simple Arduino library for the howto repo
 *

 * @author SparkFun Electronics
 * @date 2026
 * @copyright Copyright (c) 2026, SparkFun Electronics Inc. All rights reserved.
 *
 * @section License License
 * SPDX-License-Identifier: MIT
 *
 */

#pragma once

#include <SparkFun_Toolkit.h>

#include "sfTk/sfDevHowToDemo.h"

#include <Arduino.h>
#include <Wire.h>

/**
 *
 *
 */
class sfeArduinoHowToDemo : public sfHowToDemo
{
  public:
    sfeArduinoHowTo()
    {
    }

    bool begin(const uint8_t &address = SFE_HOWTO_DEFAULT_ADDRESS, TwoWire &wirePort = Wire)
    {
        if (_theI2CBus.init(wirePort, address, true) != ksfTkErrOk)
            return false;

        if (sfHowToDemo::begin(&_theI2CBus) == false)
            return false;

        // are we connected ?
        if (isConnected() == false)
            return false;

        return true;
    }

    /**
     * @brief Simple check - the demo is always connected
     *
     * @details
     * This method attempts to ping the device at the current I2C address
     *
     * @return true If device responds to ping and false otherwise.
     */
    bool isConnected(void)
    {
        return true;
    }

  private:
    /**
     * @brief Arduino I2C bus interface instance for demo
     *
     * @details
     * This member handles the low-level I2C communication between the Arduino and a target device
     *
     * The bus interface is configured during begin() and used by all communication methods.
     *
     * @see sfTkArdI2C
     * @see begin()
     */
    sfTkArdI2C _theI2CBus;
};
