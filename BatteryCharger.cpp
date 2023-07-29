#include "BatteryCharger.h"
#include <iostream>

BatteryCharger::BatteryCharger(Car& car) : car_(car), is_on_(false) {}

void BatteryCharger::turn_on()
{
    is_on_ = true;
    std::cout << "Battery charger has been turned on." << std::endl;
}

void BatteryCharger::turn_off()
{
    is_on_ = false;
    std::cout << "Battery charger has been turned off." << std::endl;
}