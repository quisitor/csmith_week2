/**
	Course: SDEV-340-45
	Assignment Week: 2
	Assignment Purpose: Demonstrate a Base Class and Inheritance
	\file Truck.h Declare a derived Car class that specifies a specific car category - truck
	\author: Craig Smith
	\version: 1.0 4/3/22

*/
#pragma once
#include "Car.h"
#include <string>

namespace wk2 {

	class Truck : public Car
	{
	public:
		Truck();
		Truck(std::string make, std::string model, int year, double cargoSize, double maxCargoWeight);
		void setCargoSize(double cargoSize);
		void setMaxCargoWeight(double maxCargoWeight);
		double getCargoSize();
		double getMaxCargoWeight();
		virtual void print() override;
		friend std::ostream& operator << (std::ostream& output, Truck truck);

	private:
		double _cargoSize;
		double _maxCargoWeight;

	};

}


