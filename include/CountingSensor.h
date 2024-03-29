//
// Created by Andrey Gramakov on 19-Jul-19.
//

#ifndef BASIC_MOVING_PLATFORM_COUNTINGSENSOR_H
#define BASIC_MOVING_PLATFORM_COUNTINGSENSOR_H

#include <stdio.h>
#include <string.h>
#include "BasicMovingPlatform_not_implemented.h"

#define MSG_SZ 32

using namespace std;

class CountingSensor
{
public:
    CountingSensor();

    CountingSensor(const char* id, int pin);
    unsigned int counter;
    char id[3];
    void flush_n_send();
private:
    char msg[MSG_SZ];
    void GenerateMsg();
    void ClearMsg();
};


#endif //BASIC_MOVING_PLATFORM_COUNTINGSENSOR_H
