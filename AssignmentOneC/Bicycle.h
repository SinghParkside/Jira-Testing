/**
 * @file Bicycle.h
 * @author your name (Mason Harper CSCI 333-001)
 * @brief Calculates the carbon footprint of various types of mad made objects
 * @version 0.1
 * @date 2022-03-07
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <vector>
#include <string>

#ifndef BICYCLE_H
#define BICYCLE_H

using namespace std;

// Bicycle class declaration
class Bicycle: public CarbonFootprint {

public :
    // Bicycle constructor declaration
    Bicycle();
    // multi-arg constructor declaration
    Bicycle(int age);
    // Declaration of getCarbonFootprint
    void getCarbonFootprint();  

private:
    int age;
};

#endif