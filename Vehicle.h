#ifndef VEHICLE_H
#define VEHICLE_H
#include <string>

using namespace std;

class Vehicle {
private:
	string manufacture;
	int year;
public:
	Vehicle();
	void setManufacture(string);
	void setYear(int);
	string getManufacture();
	int getYear();
	void displayInfo();

};
#endif