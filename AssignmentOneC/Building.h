/**
 * @file Building.h
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

#ifndef BUILDING_H
#define BUILDING_H

using namespace std;

class Building:public CarbonFootprint {

// class declaration
public :
    // single arg constructor declaration
    Building(int sqft);
    // multi-arg constructor declaration
    Building(int sqft, string material);
    // getCarbonFootprint declaration
    void getCarbonFootprint();
    // getSqft declaration
    int getSqft();

// private object attributes
private :
    // square feet of building
    int sqft;
    // material building is made from
    string material;
};

#endif