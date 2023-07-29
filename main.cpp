#include "Car.h"
#include "FuelTank.h"
#include <iostream>

int main()
{
    FuelTank fuel_tank(50);
    Car car(fuel_tank);

    car.turn_on_air_conditioner();
    car.turn_on_battery_charger();

    std::cout << "Starting the car..." << std::endl;
    car.start();

    std::this_thread::sleep_for(std::chrono::seconds(5));

    std::cout << "Stopping the car..." << std::endl;
    car.stop();

    car.turn_off_battery_charger();
    car.turn_off_air_conditioner();

    return 0;
}