/*\
Name:Branden Kozel
Date: 4/18/24
Class: 1202 201
\*/

#include "Truck.h"
#include <iostream>

using namespace std;

Truck::Truck() : towingCapacity(0) {}

Truck::Truck(string manufacturer, int yearBuilt, int towingCapacity) : Vehicle(manufacturer, yearBuilt), towingCapacity(towingCapacity) {}

int Truck::getTowingCapacity() const 
{
    return towingCapacity;
}

void Truck::setTowingCapacity(int towingCapacity) 
{
    this->towingCapacity = towingCapacity;
}

void Truck::displayInfo() const 
{
    Vehicle::displayInfo();
    cout << "Towing Capacity: " << towingCapacity << endl;
}
