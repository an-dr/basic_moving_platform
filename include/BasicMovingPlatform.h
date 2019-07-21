/*
 * BasicMovingPlatform.h
 *
 *  Created on: Jul 17, 2019
 *      Author: dongr
 */

#ifndef MOVING_H_
#define MOVING_H_

#include "BasicMovingPlatform_not_implemented.h"
#include "Motor.h"
#include "CountingSensor.h"

using namespace std;


class BasicMovingPlatform
{
public:
    BasicMovingPlatform(int pin_dc_left_A, int pin_dc_left_B,
           int pin_dc_right_A, int pin_dc_right_B,
           int pin_c_left, int pib_c_right);

    Motor dc_left;
    Motor dc_right;
    CountingSensor cntr_left;
    CountingSensor cntr_right;


    void forward();

    void backward();

    void left();

    void right();
};

#endif /* MOVING_H_ */
