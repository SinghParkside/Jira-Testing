/**
 * @brief header file for the rational number class
 * 
 */
using namespace std;

class RationalNumber {
public:
   // constructor declaration
   RationalNumber(int ,int);
   // destructor declaration
   ~RationalNumber();
   // multiply operator overload declaration
   RationalNumber operator * (RationalNumber);
   // addition operator overload declaration
   RationalNumber operator + (RationalNumber);
   // subtraction operator overload declaration
   RationalNumber operator - (RationalNumber);
   // division operator overload declaration
   RationalNumber operator / (RationalNumber);

   // is equals operator overload declaration
   bool operator == (RationalNumber);
   // not equals operator overload declaration
   bool operator !=(RationalNumber);
   // to string declaration
   string toString();

private:
   // instance variables
   int numerator;
   int denominator;

};