#include <iostream>
#include "Car.h"

int main(){
    Car redCar("red");
    std::cout << redCar.getColor() << "\n";
    std::cout << redCar.getSpeed() << "\n";
    redCar.accelerate(0, 0);
    std::cout<<redCar.getSpeed() << "\n";
    return 0;
}