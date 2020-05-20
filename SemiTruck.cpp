#include "SemiTruck.h"

SemiTruck::SemiTruck(const std::string& n) : Vehicle(n) { }

void SemiTruck::setSpeed(int s)
{
    Vehicle::setSpeed(s);
}