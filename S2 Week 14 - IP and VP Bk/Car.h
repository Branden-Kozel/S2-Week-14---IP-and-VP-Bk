#pragma once
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

};

#endif
