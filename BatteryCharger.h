#pragma once

#include "Car.h"
#include <atomic>

class Car;

class BatteryCharger {
public:
    BatteryCharger(Car& car);

    void turn_on();
    void turn_off();

private:
    Car& car_;
    std::atomic<bool> is_on_;
};
