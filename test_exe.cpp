#include <iostream>
#include "BasicMovingPlatform.h"


void set_pin(int pin, bool value)
{
    printf("It is %s\n", __func__);
}

bool get_pin(int pin)
{
    printf("It is %s\n", __func__);
    return false;
}

void init_write_pin(int pin)
{
    printf("It is %s\n", __func__);
}

void init_read_pin(int pin)
{
    printf("It is %s\n", __func__);
}

void send(string msg)
{
    printf("It is %s\n", __func__);
}


int main()
{
    BasicMovingPlatform m(1, 2, 3, 4, 5, 6);
    std::cout << "Hello, World!" << std::endl;
    return 0;
}