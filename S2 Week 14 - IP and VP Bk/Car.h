/*\
Name:Branden Kozel
Date: 4/18/24
Class: 1202 201
\*/

#pragma once
#ifndef CAR_H
#define CAR_H

#include "Vehicle.h"

class Car : public Vehicle {
private:
    int numDoors;

public:
    Car();
    Car(string manufacturer, int yearBuilt, int numDoors);
    int getNumDoors() const;
    void setNumDoors(int numDoors);
    void displayInfo() const;
};

#endif
