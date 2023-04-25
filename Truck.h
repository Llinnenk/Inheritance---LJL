#ifndef TRUCK_H
#define TRUCK_H
#include "Vehicle.h"
#include <iostream>

class Truck : public Vehicle {
private:
	int capacity;
public:
	Truck();
	void setCapacity(int);
	int getCapacity();
	void displayTruckInfo();
};
#endif