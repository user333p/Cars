#pragma once

#include "FuelTank.h"
#include <atomic>

class Engine {
public:
    Engine(FuelTank& fuel_tank);

    void run();
    void stop();

private:
    FuelTank& fuel_tank_;
    std::atomic<bool> is_running_;
};