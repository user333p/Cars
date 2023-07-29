#pragma once

class FuelTank {
public:
    FuelTank(int capacity);

    int get_fuel() const;
    void consume_fuel(int amount);

private:
    int capacity_;
    int fuel_;
};