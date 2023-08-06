#pragma once
#include <mbed.h>

class Laser
{
public:
    AnalogIn analogin;
    int read();
    Laser(PinName pin);
}