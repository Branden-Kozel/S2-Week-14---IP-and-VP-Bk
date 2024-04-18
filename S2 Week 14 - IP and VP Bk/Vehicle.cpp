/*\
Name:Branden Kozel
Date: 4/18/24
Class: 1202 201
\*/

#include "Vehicle.h"
#include <iostream>

using namespace std;

Vehicle::Vehicle() : yearBuilt(0) {}

Vehicle::Vehicle(string manufacturer, int yearBuilt) : manufacturer(manufacturer), yearBuilt(yearBuilt) {}

string Vehicle::getManufacturer() const {
    return manufacturer;
}

void Vehicle::setManufacturer(string manufacturer) {
    this->manufacturer = manufacturer;
}

int Vehicle::getYearBuilt() const {
    return yearBuilt;
}

void Vehicle::setYearBuilt(int yearBuilt) {
    this->yearBuilt = yearBuilt;
}

void Vehicle::displayInfo() const {
    cout << "Manufacturer: " << manufacturer << endl;
    cout << "Year Built: " << yearBuilt << endl;
}