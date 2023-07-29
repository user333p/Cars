#pragma once

#include "FuelTank.h"
#include "Engine.h"
#include "AirConditioner.h"
#include "BatteryCharger.h"
#include <future>

class Car {
public:
    Car(FuelTank& fuel_tank);

    void start();
    void stop();
    void turn_on_air_conditioner();
    void turn_off_air_conditioner();
    void turn_on_battery_charger();
    void turn_off_battery_charger();

private:
    Engine engine;
    AirConditioner air_conditioner;
    BatteryCharger battery_charger;
    std::future<void> future_obj;
};