#include "Engine.h"
#include <iostream>
#include <chrono>
#include <thread>

Engine::Engine(FuelTank& fuel_tank) : fuel_tank_(fuel_tank), is_running_(false) {}

void Engine::run()
{
    is_running_ = true;
    while (is_running_ && fuel_tank_.get_fuel() > 0) {
        fuel_tank_.consume_fuel(1);
        std::this_thread::sleep_for(std::chrono::milliseconds(100));
    }
    is_running_ = false;
    std::cout << "Engine has stopped." << std::endl;
}

void Engine::stop()
{
    is_running_ = false;
}