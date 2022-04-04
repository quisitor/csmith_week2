/**
	Course: SDEV-340-45
	Assignment Week: 2
	Assignment Purpose: Demonstrate a Base Class and Inheritance
	GitHub Download: https://github.com/quisitor/csmith_week2.
	
	Create a car base class that follows the Assignment Formatting Guidelines and these requirements:
	
	The car base class shall have a method to display a car's make, model, and year built.
	
	Design a sports car class that inherits from the car class. The sports car class shall take in the same information as the base class 
	but will also include the top speed of the sports car and its zero to 60 MPH time in seconds. The sports car class shall override the 
	base function print method. The override print method shall display make, model, year built, top speed, and zero to 60 time.
	
	Design a truck class that inherits from the car class. The truck class shall include information about the cargo size in cubic feet 
	and the maximum cargo weight. Create a print method that overrides the print method in the base class. This method shall only output 
	the model of the truck, cargo size in cubic feet and maximum cargo weight.
	
	Create two sports car and two truck objects.
	For one truck and one sports car object, set the values through an overloaded constructor.
	For the second set of objects set the values through mutators (setters) and accessors (getters).
	
	Your program shall demonstrate the use of the print function for each object.
	
	Your program shall demonstrate at least one instance of pointer reference and dereference (done without a smart pointer) and one smart pointer.
	
	Implement and use at least one friend function. You may choose the functionality of the friend function.
	
	\file main.cpp Implments the test cases requested for the Week 2 Assignment
	\author: Craig Smith
	\version: 1.0 4/3/22

*/

#include "Car.h"
#include "SportsCar.h"
#include "Truck.h"
#include <iostream>
#include <vector>
#include <memory>
using namespace std;
using namespace wk2;

int main() {

	 
/*
	//-------- Test code for all classes --------
	//-------- Assignment Specific Tests are Below This Section --------------

	Car car1;
	cout << "Make: " << car1.getMake() << "\nModel: " << car1.getModel() << "\nYear: " << car1.getYear() << endl;

	Car car2;
	car2.setMake("Kia");
	car2.setModel("Rio LX");
	car2.setYear(2013);
	cout << "Make: " << car2.getMake() << "\nModel: " << car2.getModel() << "\nYear: " << car2.getYear() << endl;

	Car car3 { "Jeep Wrangler", "Sahara", 1999 };
	cout << "Make: " << car3.getMake() << "\nModel: " << car3.getModel() << "\nYear: " << car3.getYear() << endl;

	SportsCar sCar1;
	cout << "Make: " << sCar1.getMake() << "\nModel: " << sCar1.getModel() << "\nYear: " << sCar1.getYear()
		<< "\nTop Speed: " << sCar1.getTopSpeed() << "\nZero-to-Sixty Time: " << sCar1.getZeroToSixtyTime() << endl;

	SportsCar sCar2;
	sCar2.setMake("Tesla");
	sCar2.setModel("Roadster");
	sCar2.setYear(2015);
	sCar2.setTopSpeed(200);
	sCar2.setZeroToSixtyTime(1.75);
	cout << "Make: " << sCar2.getMake() << "\nModel: " << sCar2.getModel() << "\nYear: " << sCar2.getYear()
		<< "\nTop Speed: " << sCar2.getTopSpeed() << "\nZero-to-Sixty Time: " << sCar2.getZeroToSixtyTime() << endl;

	SportsCar sCar3{ "Ferrari", "FancyFerrari", 1992, 2.3, 230.4 };
	cout << "Make: " << sCar3.getMake() << "\nModel: " << sCar3.getModel() << "\nYear: " << sCar3.getYear()
		<< "\nTop Speed: " << sCar3.getTopSpeed() << "\nZero-to-Sixty Time: " << sCar3.getZeroToSixtyTime() << endl;


	Truck truck1;
	cout << "Make: " << truck1.getMake() << "\nModel: " << truck1.getModel() << "\nYear: " << truck1.getYear()
		<< "\nCargo Size: " << truck1.getCargoSize() << "\nMaximum Cargo Weight: " << truck1.getMaxCargoWeight() << endl;

	Truck truck2;
	truck2.setMake("Dodge");
	truck2.setModel("Ram 1500 ECO Diesal");
	truck2.setYear(2022);
	truck2.setCargoSize(188.3);
	truck2.setMaxCargoWeight(2500);
	cout << "Make: " << truck2.getMake() << "\nModel: " << truck2.getModel() << "\nYear: " << truck2.getYear()
		<< "\nCargo Size: " << truck2.getCargoSize() << "\nMaximum Cargo Weight: " << truck2.getMaxCargoWeight() << endl;

	Truck truck3{ "Ford", "F150", 2019, 200.2, 2500 };
	cout << "Make: " << truck3.getMake() << "\nModel: " << truck3.getModel() << "\nYear: " << truck3.getYear()
		<< "\nCargo Size: " << truck3.getCargoSize() << "\nMaximum Cargo Weight: " << truck3.getMaxCargoWeight() << endl;

	
	// Test Base Class Print Method
	cout << endl;
	cout << "=============================================================================" << endl;
	cout << " Base Class Print Method Tests - Calling Derived Class Print Methods Directly" << endl;
	cout << "=============================================================================" << endl;
	cout << endl << "car1" << endl;
	car1.print();
	cout << endl << "car2" << endl;
	car2.print();
	cout << endl << "car3" << endl;
	car3.print();
	cout << endl << "sCar1" << endl;
	sCar1.print();
	cout << endl << "sCar2" << endl;
	sCar2.print();
	cout << endl << "sCar3" << endl;
	sCar3.print();
	cout << endl << "truck1" << endl;
	truck1.print();
	cout << endl << "truck2" << endl;
	truck2.print();
	cout << endl << "truck3" << endl;
	truck3.print();
	cout << endl;

	//Test Base Class insertion operator overloaded as a friend function
	cout << "Base Class Test of the Insertion Operator Overloaded as a Friend Function" << endl;
	cout << "=========================================================================" << endl << endl;
	cout << car1 << car2 << car3;
	cout << sCar1 << sCar2 << sCar3;
	cout << truck1 << truck2 << truck3;

	//Test Base Class virtual print() functionality and regular pointer reference and dereference
	cout << endl << endl;
	cout << "Base Class Test of the overriding virtual print function" << endl;
	cout << "=========================================================================" << endl << endl;
	Car* c1 = &car1;
	Car* c2 = &car2;
	Car* c3 = &car3;
	Car* sc1 = &sCar1;
	Car* sc2 = &sCar2;
	Car* sc3 = &sCar3;
	Car* t1 = &truck1;
	Car* t2 = &truck2;
	Car* t3 = &truck3;
	vector<Car*> autoList{ c1, c2, c3, sc1, sc2, sc3, t1, t2, t3 };
	for (Car* ptr : autoList) {
		ptr->print();
	}

*/



	// Create a sports car and a truck object, initialize each with an overloaded constructor
	SportsCar overLoadedSportsCar {"Tesla", "Roadster", 2019, 225, 1.8};
	Truck overLoadedTruck{ "Dodge", "ECO Diesal 1500", 2022, 24, 20000 };

	// Create a sports car and a truck object, initialize each with accessors and mutators.
	SportsCar accessorMutatorSportsCar;
	accessorMutatorSportsCar.setMake("Ford");
	accessorMutatorSportsCar.setModel("Maverick");
	accessorMutatorSportsCar.setYear(1988);
	accessorMutatorSportsCar.setTopSpeed(110);
	accessorMutatorSportsCar.setZeroToSixtyTime(7);

	Truck accessorMutatorTruck;
	accessorMutatorTruck.setMake("GMC");
	accessorMutatorTruck.setModel("Sierra 1500");
	accessorMutatorTruck.setYear(2022);
	accessorMutatorTruck.setCargoSize(48);
	accessorMutatorTruck.setMaxCargoWeight(17500);

	// Demonstrate the Print function for each object
	cout << endl << endl << "Print Function Demonstation\n";
	overLoadedSportsCar.print();
	overLoadedTruck.print();
	accessorMutatorSportsCar.print();
	accessorMutatorTruck.print();

	// Demonstrate a non-smart pointer reference and dereference
	Car* ptrCar = new Car();
	cout << endl << endl << "Non - Smart Pointer reference / dereference example\n";
	cout << *ptrCar << endl;
	delete ptrCar;

	// Demonstrate a smart pointer reference and dereference
	cout << endl << endl << "Smartpointer reference/dereference example\n";
	unique_ptr<SportsCar>ptr_sCar = make_unique<SportsCar>();
	ptr_sCar->setMake("Pointer Car");
	ptr_sCar->setModel("Smart Pointer Model");
	ptr_sCar->setTopSpeed(532.23);
	ptr_sCar->setYear(2078);
	ptr_sCar->setZeroToSixtyTime(2.1);
	ptr_sCar->print();


	// Demonstrate the implementation of at least one friend function - Overloaded the Insertion Operator << for each class
	cout << endl << endl << "Friend Function example, overloaded Insertion Operator <<\n";
	cout << overLoadedSportsCar << overLoadedTruck << accessorMutatorSportsCar << accessorMutatorTruck;

	return 0;
} 