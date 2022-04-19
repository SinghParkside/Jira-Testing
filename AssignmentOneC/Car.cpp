/**
 * @file Car.cpp
 * @author your name (Mason Harper CSCI 333-001)
 * @brief Calculates the carbon footprint of various types of mad made objects
 * @version 0.1
 * @date 2022-03-07
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <iostream>
#include "Car.h"
#include <string>
#include <vector>

using namespace std;

// single argument constructor
Car::Car(int gallons) {
    // initializes variables
    this->gallons=gallons;
}

// multi argument constructor
Car::Car(int gallons, int year, string color, string model) {
    // initializes variables
    this->gallons=gallons;
    this->year=year;
    this->color = color;
    this->model = model;
}

// method that overrides the pure virtual method in CarbonFootPrint.h
void Car::getCarbonFootprint() {
    // calculates carbon footprint
    cout<< color << " " << model <<  "that has used "<<gallons<<" gallons of gas:"<<gallons*(20)<<"."<<endl;
}