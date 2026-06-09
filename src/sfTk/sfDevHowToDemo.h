/**
 * @author SparkFun Electronics
 * @date 2026
 * @copyright Copyright (c) 2026, SparkFun Electronics Inc. This project is released under the MIT License.
 *
 * SPDX-License-Identifier: MIT
 *
 */
#pragma once

// Include the toolkit library
#include <sfTk/sfTkIBus.h>
#include <sfTk/sfToolkit.h>

// A default address for our demo repo
#define SFE_HOWTO_DEFAULT_ADDRESS 0x01

class sfDevHowToDemo
{
  public:
    /// @brief Default constructor
    sfDevHowToDemo() : _theBus{nullptr}
    {
    }

    /// @brief Begins the device
    /// @param theBus SparkFun Toolkit bus to use for communication
    /// @return 0 for success, negative for errors, positive for warnings
    bool begin(sfTkIBus *theBus = nullptr);

    /// @brief Sets the communication bus to the specified bus.
    /// @param theBus Bus to set as the communication device.
    void setCommunicationBus(sfTkIBus *theBus);

  protected:
    sfTkIBus *_theBus;
};
