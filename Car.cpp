#include "Car.h"
#include <iostream>
#include <string>
#include <iomanip>

Car::Car(string type, int number, double cost){
	carType = type;
	numCars = number;
	costPerCar = cost;
}

Car::~Car() {
}




void Car::setData(const string &carT, const int &numC, const double &costC){
	carType = carT;
	numCars = numC;
	costPerCar = costC;	
}
double Car::findTotal() const {
	return numCars * costPerCar;
}

void Car::getResults() const {
	double total = findTotal();
	cout << fixed << setprecision(2) << endl;
	cout << "Car: " << setw(6) << carType << endl;
	cout << "Number: " << setw(26) << numCars << endl;
	cout << "Cost per Car: " << setw(20) << "$ " << costPerCar << endl;
	cout << "Gross Pay: " << setw(23) << "$ " << total << endl;
}