
//
// Just a simple sketch to show the cross compile system work within a Arduino library

// Just a simple compile test for the Bus objects

#include "SparkFun_HowTo_Arduino_Library.h"

sfeArduinoHowToDemo myHowTo;

void setup()
{
    if (myHowTo.begin() == false)
    {
        // stop
        while (true)
            delay(100);
    }
}

void loop()
{
    delay(1000);
}