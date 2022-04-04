/**
    Course: SDEV-340-45
    Assignment Week: 2
    Assignment Purpose: Demonstrate a Base Class and Inheritance
    \file SportsCar.cpp Define the implementation of the derived sports car class
    \author: Craig Smith
    \version: 1.0 4/3/22

*/

#include "SportsCar.h"
#include "Car.h"
#include <string>
#include <iostream>
#include <memory>
using namespace std;

namespace wk2 {

    /**
     * Default initializtion for a SportsCar object.
     * 
     */
    SportsCar::SportsCar() : Car(), _topSpeed{0.0}, _zeroToSixtyTime{0.0}{}

    /**
     * Full initialization for a SportsCar object.
     * 
     * \param make
     * \param model
     * \param year
     * \param topSpeed
     * \param zeroToSixtyTime
     */
    SportsCar::SportsCar(string make, string model, int year, double topSpeed, double zeroToSixtyTime)
        : Car(make, model, year), _topSpeed{topSpeed}, _zeroToSixtyTime{zeroToSixtyTime}{}

    /**
     * Sets the top speed of the SportsCar in MPH.
     * 
     * \param topSpeed
     */
    void SportsCar::setTopSpeed(double topSpeed)
    {
        _topSpeed = topSpeed;
    }

    /**
     * Sets the Zero to Sixty Time rating for the SportsCar in Seconds.
     * 
     * \param zeroToSixtyTime
     */
    void SportsCar::setZeroToSixtyTime(double zeroToSixtyTime)
    {
        _zeroToSixtyTime = zeroToSixtyTime;
    }

    /**
     * Returns the SportsCar's top speed in MPH.
     * 
     * \return 
     */
    double SportsCar::getTopSpeed()
    {
        return _topSpeed;
    }

    /**
     * Returns the SportsCar's 0 to 60MPH rating in seconds.
     * 
     * \return 
     */
    double SportsCar::getZeroToSixtyTime()
    {
        return _zeroToSixtyTime;
    }

    /**
     * Override of the base class print function to display the member values for the object.
     * 
     */
    void SportsCar::print()
    {
        cout << "***************************************" << endl;
        cout << "Make: " << this->getMake() << endl;
        cout << "Model: " << this->getModel() << endl;
        cout << "Year: " << this->getYear() << endl;
        cout << "Top Speed: " << this->getTopSpeed() << endl;
        cout << "0 to 60 MPH Time(Seconds): " << this->getZeroToSixtyTime() << endl;
        cout << "***************************************" << endl;
    }

    /**
     * Friend function to overload the insertion operator.
     * 
     * \param output
     * \param sportsCar
     * \return 
     */
    std::ostream& operator<<(std::ostream& output, SportsCar sportsCar)
    {
        output << "***************************************" << endl;
        output << "Make: " << sportsCar.getMake() << endl;
        output << "Model: " << sportsCar.getModel() << endl;
        output << "Year: " << sportsCar.getYear() << endl;
        output << "Top Speed: " << sportsCar._topSpeed << endl;
        output << "0 to 60 MPH Time(Seconds): " << sportsCar._zeroToSixtyTime << endl;
        output << "***************************************" << endl;

        return output;
    }

}

