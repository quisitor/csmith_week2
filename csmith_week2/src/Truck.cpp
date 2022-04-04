/**
	Course: SDEV-340-45
	Assignment Week: 2
	Assignment Purpose: Demonstrate a Base Class and Inheritance
	GitHub Download: https://github.com/quisitor/csmith_week2.git
	\file SportsCar.cpp Define the implementation of the derived truck class
	\author: Craig Smith
	\version: 1.0 4/3/22

*/
#include "Truck.h"
#include <iostream>
using namespace std;

namespace wk2 {

	/**
	 * Default initialization for a Truck object.
	 * 
	 */
	Truck::Truck() 
		: Car(), _cargoSize{ 0.0 }, _maxCargoWeight{ 0.0 }{}

	/**
	 * Fully constructed initialization for a Truck object.
	 * 
	 * \param make
	 * \param model
	 * \param year
	 * \param cargoSize
	 * \param maxCargoWeight
	 */
	Truck::Truck(string make, string model, int year, double cargoSize, double maxCargoWeight) 
		: Car(make, model, year), _cargoSize{ cargoSize }, _maxCargoWeight{ maxCargoWeight }{}

	/**
	 * Sets the Cargo Size of the truck object.
	 * 
	 * \param cargoSize
	 */
	void Truck::setCargoSize(double cargoSize) { _cargoSize = cargoSize; }

	/**
	 * Sets the Maximum Cargo Weight for the truck object.
	 * 
	 * \param maxCargoWeight
	 */
	void Truck::setMaxCargoWeight(double maxCargoWeight) { _maxCargoWeight = maxCargoWeight; }

	/**
	 * Returns the Cargo Size of the truck object.
	 * 
	 * \return 
	 */
	double Truck::getCargoSize() { return _cargoSize; }

	/**
	 * Returns the Maximum Cargo Weight of the truck object.
	 * 
	 * \return 
	 */
	double Truck::getMaxCargoWeight() { return _maxCargoWeight; }

	/**
	 * Overrides the base class's virtual print function with the end user specified information.
	 * 
	 */
	void Truck::print()
	{
		cout << "***************************************" << endl;
		cout << "Model: " << this->getModel() << endl;
		cout << "Cargo Size (cu.ft): " << this->getCargoSize() << endl;
		cout << "Maximum Cargo Weight (lbs): " << this->getMaxCargoWeight() << endl;
		cout << "***************************************" << endl;
	}

	/**
	 * Friend function that overloads the insertion operator..
	 * 
	 * \param output
	 * \param truck
	 * \return 
	 */
	std::ostream& operator<<(std::ostream& output, Truck truck)
	{
		output << "***************************************" << endl;
		output << "Model: " << truck.getModel() << endl;
		output << "Cargo Size (cu.ft): " << truck._cargoSize << endl;
		output << "Maximum Cargo Weight (lbs): " << truck._maxCargoWeight << endl;
		output << "***************************************" << endl;

		return output;
	}

}