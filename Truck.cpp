#include<iostream>
#include<iomanip>
#include<string>
#include <cstdlib>
#include "Truck.h"

using namespace std;

Truck::Truck(){
	capacity = 0;
	Vehicle::Vehicle();
}
void Truck::setCapacity(int c) {
	capacity = c;
};
int Truck::getCapacity() {
	return capacity;
};
void Truck::displayTruckInfo() {
	Vehicle::displayInfo();
	cout << "Capacity: " << capacity << endl;

};