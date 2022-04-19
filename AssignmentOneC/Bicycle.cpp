/**
 * @file Bicycle.cpp
 * @author your name (Mason Harper CSCI 333-001)
 * @brief Calculates the carbon footprint of various types of mad made objects
 * @version 0.1
 * @date 2022-03-07
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include "CarbonFootprint.h"
#include <vector>
#include <iostream>
#include "Bicycle.h"

using namespace std;

// default Bicycle constructor
Bicycle::Bicycle() { }

// multi-arg constructor 
    Bicycle::Bicycle(int age) {
        // initializes age of bike
        this->age = age;
    }

// method that overrides the pure virtual method in CarbonFootPrint.h
void Bicycle::getCarbonFootprint() {
    // calculates carbon footprint
    cout<<"Carbonfoorprint for a bicycle is 0."<<endl;
}