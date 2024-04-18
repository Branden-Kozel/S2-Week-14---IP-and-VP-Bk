/*\
Name:Branden Kozel
Date: 4/18/24
Class: 1202 201
\*/

#include <iostream>
#include "Vehicle.h"
#include "Car.h"
#include "Truck.h"

using namespace std;

int main()
{
    string manufacturer;
    int yearBuilt, numDoors, towingCapacity;

    cout << "Enter manufacturer of Vehicle: ";
    cin >> manufacturer;
    cout << "Enter year built of Vehicle: ";
    cin >> yearBuilt;

    Vehicle vehicle(manufacturer, yearBuilt);
    vehicle.displayInfo();

    cout << "\nEnter manufacturer of Car: ";
    cin >> manufacturer;
    cout << "Enter year built of Car: ";
    cin >> yearBuilt;
    cout << "Enter number of doors of Car: ";
    cin >> numDoors;

    Car car(manufacturer, yearBuilt, numDoors);
    car.displayInfo();

    cout << "\nEnter manufacturer of Truck: ";
    cin >> manufacturer;
    cout << "Enter year built of Truck: ";
    cin >> yearBuilt;
    cout << "Enter towing capacity of Truck: ";
    cin >> towingCapacity;

    Truck truck(manufacturer, yearBuilt, towingCapacity);
    truck.displayInfo();

	system("pause");
	return 0;
}