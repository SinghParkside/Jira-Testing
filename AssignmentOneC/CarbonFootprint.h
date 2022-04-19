/**
 * @file CarbonFootPrint.h
 * @author your name (Mason Harper CSCI 333-001)
 * @brief Calculates the carbon footprint of various types of mad made objects
 * @version 0.1
 * @date 2022-03-07
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#ifndef CARBONFOOTPRINT_H
#define CARBONFOOTPRINT_H

#include <vector>


using namespace std;

// Abstract Class definition
class CarbonFootprint {
    public :
        // pure virtual method getCarbonFootprint declaration
        virtual void getCarbonFootprint() = 0;  
        
    };

#endif