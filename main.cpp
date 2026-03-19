#include <iostream>
#include "Car.h"

using namespace std;

int main() {

	string carName;
	int nCars;
	double costCars;
	
	cout << "Enter car Type" << endl;
	getline(cin, carName);

	cout << "Enter number of cars" << endl;
	cin >> nCars;

	cout << "Enter cost per cars" << endl;
	cin >> costCars;


	Car carOrder;
	carOrder.setData(carName, nCars, costCars);
	carOrder.getResults();

	return 0;
}