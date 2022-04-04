/**
	Course: SDEV-340-45
	Assignment Week: 2
	Assignment Purpose: Demonstrate a Base Class and Inheritance
	GitHub Download: https://github.com/quisitor/csmith_week2.git
	\file Car.cpp Define the base class implementation
	\author: Craig Smith
	\version: 1.0 4/3/22
*/

#include "Car.h"
#include "Car.h"
#include <iostream>
using namespace std;

namespace wk2 {

	/**
	 * Default initialization for a Car object.
	 */
	Car::Car()
	{
		setMake("No Make Defined");
		setModel("No Model Defined");
		setYear(0);
	}

	/**
	 *Fully conststructed initialization of a Car object.
	 * 
	 * \param make
	 * \param model
	 * \param year
	 */
	Car::Car(string make, string model, int year)
	{
		setMake(make);
		setModel(model);
		setYear(year);
	}

	/**
	 * Sets the make of the Car.
	 * 
	 * \param make
	 */
	void Car::setMake(string make)
	{
		_make = make;
	}

	/**
	 * Sets the Model of the car.
	 * 
	 * \param model
	 */
	void Car::setModel(string model)
	{
		_model = model;
	}

	/**
	 * Sets the year of the car.
	 * 
	 * \param year
	 */
	void Car::setYear(int year)
	{
		_year = year;
	}

	/**
	 * Returns the Make of the car.
	 * 
	 * \return 
	 */
	string Car::getMake()
	{
		return _make;
	}

	/**
	 * Returns the model of the car.
	 * 
	 * \return 
	 */
	string Car::getModel()
	{
		return _model;
	}

	/**
	 * Returns the year of the car.
	 * 
	 * \return 
	 */
	int Car::getYear()
	{
		return _year;
	}

	/**
	 * Virtual method designed to be overriden by any subclasses.
	 * 
	 */
	void Car::print()
	{
		cout << "***************************************" << endl;
		cout << "Make: " << this->getMake() << endl;
		cout << "Model: " << this->getModel() << endl;
		cout << "Year: " << this->getYear() << endl;
		cout << "***************************************" << endl;
	}

	/**
	 * Friend function to overload the insertion operator.
	 * 
	 * \param output
	 * \param car
	 * \return 
	 */
	std::ostream& operator<<(std::ostream& output, const Car& car)
	{
		output << "***************************************" << endl;
		output << "Make: " << car._make << endl;
		output << "Model: " << car._model << endl;
		output << "Year: " << car._year << endl;
		output << "***************************************" << endl;
		return output;
	}

}

