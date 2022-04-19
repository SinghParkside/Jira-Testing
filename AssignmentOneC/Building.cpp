/**
 * @file Building.cpp
 * @author your name (Mason Harper CSCI 333-001)
 * @brief Calculates the carbon footprint of various types of mad made objects
 * @version 0.1
 * @date 2022-03-07
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <iostream>
#include "Building.h"
#include <string>
#include <vector>

using namespace std;

// single-arg constructor
Building::Building(int sqft) {
    // initializes square feet of building
    this->sqft=sqft;
}

// multi-arg constructor for building
Building::Building(int sqft, string material) {
    // initializes square feet of building
    this->sqft=sqft;
    // initializes the material of the building
    this->material = material;
}

// method that overrides the pure virtual method in CarbonFootPrint.h
void Building::getCarbonFootprint() {
    // calculates carbon footprint
    cout<<"Building made from " << material << " with "<<sqft<<" square feet:"<<sqft*(134)<<"."<<endl;
}