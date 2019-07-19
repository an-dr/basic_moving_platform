//
// Created by Andrey Gramakov on 19-Jul-19.
//

#include "CountingSensor.h"
#include "weak.h"


CountingSensor::CountingSensor(string id, int pin) :
		counter(0), id(id)
{
	init_read_pin(pin);
}

void CountingSensor::flush_n_send()
{

	string msg = "c_sens_" + id + to_string(counter);
	send(msg);
	counter = 0;
}

CountingSensor::CountingSensor()
{

}