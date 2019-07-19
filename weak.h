//
// Created by Andrey Gramakov on 19-Jul-19.
//

#ifndef BASIC_MOVING_PLATFORM_WEAK_H
#define BASIC_MOVING_PLATFORM_WEAK_H

#include "common_macros.h"
#include <string>

using namespace std;

void set_pin(int pin, bool value);

bool get_pin(int pin);

void init_write_pin(int pin);

void init_read_pin(int pin);

void send(string msg);



#endif //BASIC_MOVING_PLATFORM_WEAK_H
