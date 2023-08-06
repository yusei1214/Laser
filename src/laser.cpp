#include <stdio.h>
#include <mbed.h>
#include "laser.hpp"

int Laser::read()
{
    float dis = analogin.read();
    int dismm = int(dis * 9950 + 50);
    return (dismm);
}

Laser::Laser(PinName pin) : analogin(pin)
{
}