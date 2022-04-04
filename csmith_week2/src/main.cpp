#include "Car.h"
#include "SportsCar.h"
#include "Truck.h"
#include <iostream>
#include <vector>
#include <memory>
using namespace std;
using namespace wk2;

int main() {

	// Test constructors, setters, getters

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


	//Test Smart Pointer reference and dereference
	cout << endl << endl;
	cout << "Smartpointer reference/deference example\n";
	cout << "============================================================\n";
	unique_ptr<SportsCar>ptr_sCar = make_unique<SportsCar>();
	ptr_sCar->setMake("Pointer Car");
	ptr_sCar->setModel("Smart Pointer Model");
	ptr_sCar->setTopSpeed(532.23);
	ptr_sCar->setYear(2078);
	ptr_sCar->setZeroToSixtyTime(2.1);
	cout << "Smartpointer dereference within its scope" << endl;
	ptr_sCar->print();


	return 0;
} 