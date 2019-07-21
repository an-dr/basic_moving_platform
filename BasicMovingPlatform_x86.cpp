#include <iostream>
#include "BasicMovingPlatform_not_implemented.h"

#if _WIN32 | unix

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

void send(char * msg, int str_size)
{
    printf("It is %s\n", __func__);
}


#endif