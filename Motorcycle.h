#pragma once
#include "Vehicle.h"

#include <iostream>
#include <limits>

struct Motorcycle : public Vehicle
{
    //Motorcycle();

    Motorcycle(const std::string& n);
    
    void lanesplitAndRace( int topSpeed = std::numeric_limits<int>::max() );
    
    void tryToEvade() override;

    void setSpeed(int s) override;
};
