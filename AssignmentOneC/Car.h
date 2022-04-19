/**
 * @file Car.h
 * @author your name (Mason Harper CSCI 333-001)
 * @brief Calculates the carbon footprint of various types of mad made objects
 * @version 0.1
 * @date 2022-03-07
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include "CarbonFootprint.h"
#include <string>
#include <vector>

#ifndef CAR_H
#define CAR_H

class Car : public CarbonFootprint {

// constructor declarations
public :
    Car(int gallons); // single argument constructor
    Car(int gallons, int year, string color, string model); // multiple argument constructor

    // declaration for getCarbonFootPrint method
    void getCarbonFootprint();

// private attributes
private :
    // gallons of gas
    int gallons;
    // year car was designed
    int year;
    // color of car
    string color;
    // model of car
    string model;
};

#endif