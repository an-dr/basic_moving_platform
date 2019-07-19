//
// Created by Andrey Gramakov on 19-Jul-19.
//

#include "Motor.h"

using namespace std;

Motor::Motor(int pinA, int pinB) :
		pinA(pinA), pinB(pinB)
{
	init_write_pin(pinA);
	init_write_pin(pinB);
}

void Motor::set_pins(int pinA, int pinB)
{
	this->pinA = pinA;
	this->pinB = pinB;
}

void Motor::forward_or_clockwise()
{
	set_pin(pinA, true);
	set_pin(pinB, false);

}

void Motor::backward_or_counterclock()
{
	set_pin(pinA, false);
	set_pin(pinB, true);
}

void Motor::stop()
{
	set_pin(pinA, false);
	set_pin(pinB, false);
}

Motor::Motor()
{

}