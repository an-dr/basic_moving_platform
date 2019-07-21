//
// Created by Andrey Gramakov on 21-Jul-19.
//
#include <iostream>
#include "BasicMovingPlatform.h"

int main()
{
    BasicMovingPlatform m(1, 2, 3, 4, 5, 6);
    m.cntr_left.counter = 12345;
    m.cntr_left.flush_n_send();
    std::cout << "Hello, World!" << std::endl;
    return 0;
}