/**
	Course: SDEV-340-45
	Assignment Week: 2
	Assignment Purpose: Demonstrate a Base Class and Inheritance
	GitHub Download: https://github.com/quisitor/csmith_week2.git
	\file Car.h Declare the interface for the base Car class
	\author: Craig Smith
	\version: 1.0 4/3/22
	
*/

#pragma once
# include<string>
# include<iostream>

namespace wk2 {

	class Car
	{
	public:
		Car();
		Car(std::string make, std::string model, int year);
		void setMake(std::string make);
		void setModel(std::string model);
		void setYear(int year);
		std::string getMake();
		std::string getModel();
		int getYear();
		virtual void print();
		friend std::ostream& operator << (std::ostream& output, const Car& car);

	private:
		std::string _make;
		std::string _model;
		int _year;
	};


}

