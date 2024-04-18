/*\
Name:Branden Kozel
Date: 4/18/24
Class: 1202 201
\*/

#include <iostream>
#include<iomanip>
#include "Vehicle.h"
#include "Car.h"
#include "Truck.h"

using namespace std;

int main()
{
    string manufacturer;
    int yearBuilt, numDoors, towingCapacity;

    cout << setw(68) << "Vehicle Test Program\n";

    cout << "Enter manufacturer of Vehicle: ";
    getline(cin,manufacturer);
    cout << "Enter year built of Vehicle: ";
    cin >> yearBuilt;

    cout << endl;

    Vehicle vehicle(manufacturer, yearBuilt);
    vehicle.displayInfo();

    cout << "\nEnter manufacturer of Car: ";
    cin.ignore();
    getline(cin, manufacturer);
    cout << "Enter year built of Car: ";
    cin >> yearBuilt;
    cout << "Enter number of doors of Car: ";
    cin >> numDoors;

    cout << endl;

    Car car(manufacturer, yearBuilt, numDoors);
    car.displayInfo();

    cout << "\nEnter manufacturer of Truck: ";
    cin.ignore();
    getline(cin, manufacturer);
    cout << "Enter year built of Truck: ";
    cin >> yearBuilt;
    cout << "Enter towing capacity of Truck: ";
    cin >> towingCapacity;

    cout << endl;

    Truck truck(manufacturer, yearBuilt, towingCapacity);
    truck.displayInfo();

    cout << endl << endl;
	system("pause");
	return 0;
}