//
// Created by Andrey Gramakov on 19-Jul-19.
//

#ifndef BASIC_MOVING_PLATFORM_MOTOR_H
#define BASIC_MOVING_PLATFORM_MOTOR_H

#include <stdio.h>
#include <string.h>
#include "weak.h"

class Motor
{
public:
    Motor();

    Motor(int pinA, int pinB);

    int pinA, pinB;

    void set_pins(int pinA, int pinB);

    void forward_or_clockwise();

    void backward_or_counterclock();

    void stop();
};


#endif //BASIC_MOVING_PLATFORM_MOTOR_H
