#include<iostream>
#include<iomanip>
#include<string>
#include <cstdlib>
#include "Car.h"

using namespace std;

Car::Car(){
	doors = 0;
	Vehicle::Vehicle();
}
void Car::setDoors(int d) {
	doors = d;
}
int Car::getDoors() {
	return doors;
}
void Car::displayCarInfo() {
	Vehicle::displayInfo();
	cout << "Doors: " << doors<<endl;
}