
![SparkFun How To Arduino Library](docs/images/gh-banner-howto-demo.png  "SparkFun HowTo Arduino Library")

# SparkFun How To Arduino Library

GitHub repository that outlines how to build a modern SpakRun Arduino Library, which includes use of the SparkFun Toolkit, and Doxygen generated documentation that is published via GitHub Pages.


![GitHub License](https://img.shields.io/github/license/sparkfun/SparkFun_Arduino_Library_HowTo)
![Release](https://img.shields.io/github/v/release/sparkfun/SparkFun_Arduino_Library_HowTo)
![Release Date](https://img.shields.io/github/release-date/sparkfun/SparkFun_Arduino_Library_HowTo)
![Documentation - build](https://img.shields.io/github/actions/workflow/status/sparkfun/SparkFun_Arduino_Library_HowTo/build-deploy-ghpages.yml?label=doc%20build)
[![Compile Test](https://github.com/sparkfun/SparkFun_Arduino_Library_HowTo/actions/workflows/cross-compilation.yml/badge.svg)](https://github.com/sparkfun/SparkFun_Arduino_Library_HowTo/actions/workflows/cross-compilation.yml)
![GitHub issues](https://img.shields.io/github/issues/sparkfun/SparkFun_Arduino_Library_HowTo/)

The SparkFun MCP4725 Arduino Library provides full control over Microchip's MCP4725, a 12-bit single-channel I2C digital-to-analog converter (DAC). The MCP4725 is compatible with SparkFun's Qwiic connect system, so no soldering is required to get started. An onboard EEPROM allows the device to retain its DAC value and power-down settings across power cycles, making it ideal for applications that require a consistent analog output at startup.



This library allows you to:

* Build a SparkFun Arduino Library repository - see the [HOWTO.md](HOWTO.md) file for details on creating a repository.
* Implement a GitHub Action that preforms a cross-compile check of the library
* Uses doxygen to generate documentation for the library and publish the results to GitHub Pages


# Repository Contents

* **/examples** - Example sketches for the library (.ino). Run these from the Arduino IDE.
* **/src** - Source files for the library (.cpp, .h).
* **/docs** - configuration files for the documentation.
* **keywords.txt** - Keywords from this library that will be highlighted in the Arduino IDE.
* **library.properties** - General library properties for the Arduino package manager.

# Documentation

* **[Library Documentation](https://docs.sparkfun.com/SparkFun_MCP4725_Arduino_Library/)** - Arduino Library Documentation for the SparkFun MCP4725 breakout boards.
* **[Hookup Guide](https://docs.sparkfun.com/SparkFun_Qwiic_DAC_MCP4725/)** - Hookup guide for the SparkFun MCP4725 breakout boards.
* **[Installing an Arduino Library Guide](https://learn.sparkfun.com/tutorials/installing-an-arduino-library)** - Basic information on how to install an Arduino library.
* **[Hardware GitHub Repository - Qwiic 1x1](TODO)** - Main repository (including hardware files) for the SparkFun Qwiic MCP4725 Breakout.
* **[Hardware GitHub Repository - Breakout](TODO)** - Main repository (including hardware files) for the SparkFun I2C DAC Breakout.

## Products That Use This Library

* [[BOB-31206]](https://www.sparkfun.com/sparkfun-qwiic-12-bit-dac-breakout-mcp4725.html) - SparkFun Qwiic 12-Bit DAC Breakout - MCP4725
* [[TODO: SKU]](https://www.sparkfun.com/sparkfun-i2c-dac-breakout-mcp4725.html) - SparkFun I2C DAC Breakout - MCP4725

## License Information

This product is ***open source***!

This product is licensed using the [MIT Open Source License](https://opensource.org/license/mit)
