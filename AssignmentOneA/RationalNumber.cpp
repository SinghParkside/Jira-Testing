/**
 * @file RationalNumber.cpp
 * @author Mason Harper
 * @brief  .cpp file for RationalNumber
 * @version 0.1
 * @date 2022-03-11
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include"RationalNumber.h"
#include <sstream>

using namespace std;

// two argument constructor
RationalNumber::RationalNumber(int n,int d) {

   if(d <= 0) {
      d=1;
   }

   numerator = n;
   denominator = d;
}

// destructor
RationalNumber::~RationalNumber(){
  numerator = 1;
  denominator = 1;
}

// multiply operator overload function
RationalNumber RationalNumber::operator * (RationalNumber r){
   // temporary variables
   int n ,d;

   // calculates numerator
   n = numerator*r.numerator;
   // calculate denominator
   d = denominator*r.denominator;

   // returns a new rational number 
   return *(new RationalNumber(n,d));
}
// addition operator overload function
RationalNumber RationalNumber::operator + (RationalNumber r){
   // temporary variables
   int n ,d;

   // calculates numerator
   n=(numerator*r.denominator)+(r.numerator*denominator);
   // calculates denominator
   d=denominator*r.denominator;

   // returns new rational number
   return *(new RationalNumber(n,d));
}
// subtraction operator overload function
RationalNumber RationalNumber::operator - (RationalNumber r){
   // temporary variables
   int n ,d;

   // calculates numerator
   n=(numerator*r.denominator)-(r.numerator*denominator);
   // calculates denominator
   d=denominator*r.denominator;

   // returns new rational number
   return *(new RationalNumber(n,d));
}
// divide operator overload function
RationalNumber RationalNumber::operator / (RationalNumber r){
   // temporary variables
   int n ,d;

   // calculates numerator
   n= numerator*r.denominator;
   // calculates denominator
   d=denominator*r.numerator;

   // returns new rational number
   return *(new RationalNumber(n,d));
}

// is equal operator overload function
bool RationalNumber::operator == (RationalNumber r){
   // checks if numerator times the denominator of one function
   // equals the numerator times the denominator of the other function
   if(numerator * r.denominator == r.numerator *denominator) {
      // returns true
      return true;
   }
   else {
      // returns false
      return false;
   }
}
// not equals operator overload function
bool RationalNumber::operator !=(RationalNumber r){
   // returns true if the numerator times the denominator of one function
   //  doesn't equal the numerator times the denominator of the other function
   return numerator *r.denominator != r.numerator *denominator;
}
string RationalNumber::toString(){

   // creates string
   ostringstream str;

   // adds numerator and denominator to string seperated by /
   str << numerator << '/' << denominator;

   // returns string
   return str.str();
}