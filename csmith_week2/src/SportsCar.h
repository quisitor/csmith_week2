/**
	Course: SDEV-340-45
	Assignment Week: 2
	Assignment Purpose: Demonstrate a Base Class and Inheritance
	GitHub Download: https://github.com/quisitor/csmith_week2.git
	\file SportsCar.h Declare a derived Car class that specifies a specific car category - sports cars
	\author: Craig Smith
	\version: 1.0 4/3/22

*/
#pragma once
#include "Car.h"

namespace wk2 {
	
	class SportsCar : public Car {

	public:
		SportsCar();
		SportsCar(std::string make, std::string model, int year, double topSpeed, double zeroToSixtyTime);
		void setTopSpeed(double topSpeed);
		void setZeroToSixtyTime(double zeroToSixtyTime);
		double getTopSpeed();
		double getZeroToSixtyTime();
		virtual void print() override;
		friend std::ostream& operator << (std::ostream& output, SportsCar sportsCar);


	private:
		double _topSpeed;
		double _zeroToSixtyTime;

	};
}


