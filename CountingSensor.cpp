//
// Created by Andrey Gramakov on 19-Jul-19.
//

#include "CountingSensor.h"
#include "weak.h"


CountingSensor::CountingSensor(const char * id, int pin) :
        counter(0)
{
    this->id[0] = id[0];
    this->id[1] = id[1];
    this->id[2] = '\0';
    init_read_pin(pin);
}


void CountingSensor::GenerateMsg()
{
    ClearMsg();
    char counter_str[10] = "";
    sprintf(counter_str, "%d", counter);
    strcat(msg, "c_sens_");
    strcat(msg, id);
    strcat(msg, counter_str);
}

void CountingSensor::flush_n_send()
{
    GenerateMsg();
    send(msg);
    ClearMsg();
    counter = 0;
}

CountingSensor::CountingSensor()
{
    ClearMsg();
    counter = 0;
    id[0] = '0';
    id[1] = '0';
}

void CountingSensor::ClearMsg()
{
    memset(msg,0,MSG_SZ); // clear the string
}
