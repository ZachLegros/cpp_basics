#include "Car.h"
#include <iostream>
#include <string>

using namespace std;

Car::Car(string color)
{
    this->color = color;
    this->speed = 0;
}

float Car::getSpeed()
{
    return speed;
}

string Car::getColor()
{
    return color;
}

void Car::accelerate(float meters, float seconds)
{
    speed = meters/seconds;
}