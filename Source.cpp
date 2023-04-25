//Name
//Date
//Program Name
//Program Description

#include<iostream>
#include<iomanip>
#include<string>
#include"Vehicle.h"
#include"Car.h"
#include"Truck.h"
using namespace std;

int main() {
	Vehicle generic;
	Car sedan;
	Truck utility;
	string brand;
	int made=0;
	int doors = 0;
	int load=0;

	cout << "Vehicle Program" << endl<<endl;
	cout << "Vehicle:" << endl;
	cout << "Enter the manufacturer: ";
	getline(cin, brand);
	generic.setManufacture(brand);
	cout << "Enter the year built: ";
	cin >> made;
	generic.setYear(made);
	generic.displayInfo();

	cout << endl<<"Car:" << endl;
	cout << "Enter the manufacturer: ";
	cin.ignore();
	getline(cin, brand);
	sedan.setManufacture(brand);
	cout << "Enter the year built: ";
	cin >> made;
	sedan.setYear(made);
	cout << "Enter the number of doors: ";
	cin >> doors;
	sedan.setDoors(doors);
	sedan.displayCarInfo();

	cout << endl << "Truck:" << endl;
	cout << "Enter the manufacturer: ";
	cin.ignore();
	getline(cin, brand);
	utility.setManufacture(brand);
	cout << "Enter the year built: ";
	cin >> made;
	utility.setYear(made);
	cout << "Enter the number of doors: ";
	cin >> load;
	utility.setCapacity(load);
	utility.displayTruckInfo();

	return 0;