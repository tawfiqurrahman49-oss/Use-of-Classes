#ifndef CAR_H
#define CAR_H

#include <string>
using namespace std;

class Car {

	private:
		string carType;
		int numCars;
		double costPerCar;
		double findTotal() const;
	
	public:
		Car(string type = "None", int number = 0, double cost = 0.00);
		~Car();
		void setData(const string &carT, const int &numC, const double &costC);
		void getResults() const;

};

#endif

