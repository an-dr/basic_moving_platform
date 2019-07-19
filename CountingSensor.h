//
// Created by Andrey Gramakov on 19-Jul-19.
//

#ifndef BASIC_MOVING_PLATFORM_COUNTINGSENSOR_H
#define BASIC_MOVING_PLATFORM_COUNTINGSENSOR_H

#include <string>
#include "weak.h"

using namespace std;

class CountingSensor
{
public:
    CountingSensor();

    CountingSensor(string id, int pin);
    unsigned int counter;
    string id;
    void flush_n_send();
};


#endif //BASIC_MOVING_PLATFORM_COUNTINGSENSOR_H
