#ifndef RN
#define RN
#include <iostream>
using namespace std;
class rationalNumber
{
	public:
		void setRationalNumber(); // Gets the rational number from the user
		void getRationalNumber(); // Accessor function
		double operator+(rationalNumber // Right hand side value 
			); // Addition operator
		double operator-(rationalNumber // Right hand side value
		); // Subtraction operator
		double operator*(rationalNumber // Right hand side value
		); // Multiplication operator
		double operator/(rationalNumber // Right hand side value
		); // Division operator
		double operator==(rationalNumber // Right hand side value
		); // Equlaity Operator
		double operator<=(rationalNumber // Right hand side value
		); // Less than or equal to operator
		double operator>=(rationalNumber // Right hand side value
		); // Greater than or equal to operator
		double operator<(rationalNumber // Right hand side value
		); // Less than oeprator
		double operator>(rationalNumber // Right hand side value
		); // Greater than operator
		ostream& operator<<(rationalNumber // Right hand side value
		); // Stream insertion operator
		istream& operator>>(rationalNumber // Right hand side value
		); // Stream extraction operator
	private:
		string rationalNumber; // This is the rational number
};
#endif

