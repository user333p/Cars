#include "Car.h"
#include <iostream>

Car::Car(FuelTank& fuel_tank) : engine(fuel_tank), air_conditioner(*this), battery_charger(*this) {}

void Car::start()
{
    future_obj = std::async(std::launch::async, &Engine::run, &engine);
}

void Car::stop()
{
    engine.stop();
    future_obj.wait();
}

void Car::turn_on_air_conditioner()
{
    air_conditioner.turn_on();
}

void Car::turn_off_air_conditioner()
{
    air_conditioner.turn_off();
}

void Car::turn_on_battery_charger()
{
    battery_charger.turn_on();
}

void Car::turn_off_battery_charger()
{
    battery_charger.turn_off();
}
