/*
 * BasicMovingPlatform.cpp
 *
 *  Created on: Jul 17, 2019
 *      Author: dongr
 */

#include "BasicMovingPlatform.h"


BasicMovingPlatform::BasicMovingPlatform(
        int pin_dc_left_A, int pin_dc_left_B,
        int pin_dc_right_A, int pin_dc_right_B,
        int pin_c_left, int pib_c_right)
{
    dc_left = Motor(pin_dc_left_A, pin_dc_left_B);
    dc_right = Motor(pin_dc_right_A, pin_dc_right_B);
    cntr_left = CountingSensor("cL", pin_c_left);
    cntr_right = CountingSensor("cR", pib_c_right);
}

void BasicMovingPlatform::forward()
{
    dc_left.forward_or_clockwise();
    dc_right.forward_or_clockwise();
}

void BasicMovingPlatform::backward()
{
    dc_left.backward_or_counterclock();
    dc_right.backward_or_counterclock();
}

void BasicMovingPlatform::left()
{
    dc_left.forward_or_clockwise();
    dc_right.backward_or_counterclock();
}

void BasicMovingPlatform::right()
{
    dc_left.backward_or_counterclock();
    dc_right.forward_or_clockwise();
}



