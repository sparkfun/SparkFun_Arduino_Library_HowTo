/*
 * @author SparkFun Electronics
 * @date 2026
 * @copyright Copyright (c) 2026, SparkFun Electronics Inc. This project is released under the MIT License.
 *
 * SPDX-License-Identifier: MIT
 */

#include "sfDevHowToDemo.h"

bool sfDevHowToDemo::begin(sfTkIBus *theBus)
{
    // Setup Arduino I2C bus
    if (theBus == nullptr)
        return false;

    setCommunicationBus(theBus);

    // Check if device is connected
    return true;
}
void sfDevHowToDemo::setCommunicationBus(sfTkIBus *theBus)
{
    _theBus = theBus;
}
