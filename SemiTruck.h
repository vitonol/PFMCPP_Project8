#pragma once
#include "Vehicle.h"

struct SemiTruck : public Vehicle
{
    SemiTruck(const std::string& n);
    void closeWindows();
    void setSpeed(int s) override;

    void tryToEvade();
};