#include "FuelTank.h"

FuelTank::FuelTank(int capacity) : capacity_(capacity), fuel_(capacity) {}

int FuelTank::get_fuel() const
{
    return fuel_;
}

void FuelTank::consume_fuel(int amount)
{
    fuel_ -= amount;
    if (fuel_ < 0) {
        fuel_ = 0;
    }
}