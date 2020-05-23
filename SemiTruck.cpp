#include "SemiTruck.h"

SemiTruck::SemiTruck(const std::string& n) : Vehicle(n) { }

SemiTruck::~SemiTruck() = default;
SemiTruck::SemiTruck(const SemiTruck&) = default;
SemiTruck& SemiTruck::operator = (const SemiTruck&) = default;


void SemiTruck::turnRadioOn()
{
    setSpeed(55);
    std::cout << name << "NEXT song is 'Country Boy' by Alan Jackson" << std::endl;
}

void SemiTruck::pullOver()
{
    std::cout << name << "Alright, slowing down now!" << std::endl;
}
