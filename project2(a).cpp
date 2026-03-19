/*
    Name : Tawfiqur Rahman
    Class : CIS 161 M01
    Date : 09/22/2025
    proj name : Project 2(a)
    Description : This project demonstrates the use of structures in C++.
                  It defines a structure to hold car order information, including
                  car model, number of cars, and price per car. The program prompts
                  the user to input these details, calculates the total price,
                  and displays the order summary.
*/

#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

typedef struct CarOrder // Defined a structure named CarOrder
{
    string carModel;
    int numberOfCars;
    double pricePerCar;

    void setData(string &carM, int &numC, double &priceC); // Function to set data
    void getResults();                                     // Function to get and display data

private:
    double findTotal(); // Function to calculate total price

} Car; // Typedef for easier usage

void Car::setData(string &carM, int &numC, double &priceC) // Function to set data
{
    // Assigning values to structure members
    carModel = carM;
    numberOfCars = numC;
    pricePerCar = priceC;
}

double Car::findTotal() // Function to calculate total price
{
    return numberOfCars * pricePerCar; // Total price calculation
}

void Car::getResults() // Function to get and display data
{
    cout << fixed << setprecision(2);                                    // Setting precision for currency display
    cout << "\nCar: " << "\t" << carModel << endl;                       // Displaying car model
    cout << "Number: " << setw(28) << numberOfCars << endl;              // Displaying number of cars
    cout << "Cost Per Car: " << setw(20) << "$ " << pricePerCar << endl; // Displaying price per car
    cout << "Gross Pay: " << setw(22) << "$ " << findTotal() << endl;    // Displaying total price
}

int main()
{

    Car order; // Creating an instance of CarOrder structure

    string carModel;    // Variable to hold car model
    int numberOfCars;   // Variable to hold number of cars
    double pricePerCar; // Variable to hold price per car

    cout << "Enter Car Model: " << endl; // Prompting user for car model
    getline(cin, carModel);              // Using getline to allow spaces in car model

    cout << "Enter Number of Cars: " << endl; // Prompting user for number of cars
    cin >> numberOfCars;                      // Reading number of cars

    cout << "Enter Price per Car: " << endl; // Prompting user for price per car
    cin >> pricePerCar;                      // Reading price per car

    order.setData(carModel, numberOfCars, pricePerCar); // Setting data in the structure
    order.getResults();                                 // Displaying the results

    return 0; // Indicating successful program termination
}