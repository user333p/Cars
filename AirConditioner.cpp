#include "AirConditioner.h"
#include <iostream>

AirConditioner::AirConditioner(Car& car) : car_(car), is_on_(false) {}

void AirConditioner::turn_on()
{
    is_on_ = true;
    std::cout << "Air conditioner has been turned on." << std::endl;
}

void AirConditioner::turn_off()
{
    is_on_ = false;
    std::cout << "Air conditioner has been turned off." << std::endl;
}