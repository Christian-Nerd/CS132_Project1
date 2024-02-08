#ifndef RN
#define RN
#include <iostream>
using namespace std;
class rationalNumber
{
	public:
		void setRationalNumber(); // Gets the rational number from the user
		void operatorgetRationalNumber(); // Accessor function
		double operator+(rationalNumber // Right hand side value 
			); // Addition operator
		double operator-(rationalNumber // Right hand side value
		); // Subtraction operator
		double operator*(rationalNumber // Right hand side value
		); // Multiplication operator
		double division(rationalNumber // Right hand side value
		); // Division operator

	

	private:
		string rationalNumber; // This is the rational number
};
#endif

