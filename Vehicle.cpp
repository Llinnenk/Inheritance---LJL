#include<iostream>
#include<iomanip>
#include<string>
#include <cstdlib>
#include "Vehicle.h"

using namespace std;

Vehicle::Vehicle() {
	manufacture = "";
	year = 0;
}

void Vehicle::setManufacture(string n) {
	
		if (!n.empty()){
			manufacture = n;
		}
		else {
			cout << "Invalid Manufacturer." << endl;
			exit(EXIT_FAILURE);
		}
}
void Vehicle::setYear(int y) {
	if (year >= 0) {
		year = y;
	}
	else {
		cout << "Invalid Year." << endl;
		exit(EXIT_FAILURE);
	}
}
string Vehicle::getManufacture() {
	return manufacture;
}
int Vehicle::getYear() {
	return year;
}
void Vehicle::displayInfo() {
	cout << "Vehicle Information: "<< endl;
	cout << "Manufacturer: " << getManufacture() << endl;
	cout << "Year Built: " << getYear() << endl;
}