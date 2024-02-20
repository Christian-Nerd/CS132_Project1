#ifndef RN
#define RN
#include <iostream>
using namespace std;
class RationalNumber
{
	public:
		void setRationalNumber(istream&); // Gets the rational number from the user
		bool checkValidRationalNumber(string&); // Checks if a rational number is valid
		void outputRationalNumber(ostream&); // Outputs rational number function
		void getNum();
		void setNum();
		void getDen();
		void setDen();
		int numerator, demoniator; // These numbers represent the top & bottom part of the fraction
		double operator+(RationalNumber // Right hand side value 
			); // Addition operator
		double operator-(RationalNumber // Right hand side value
		); // Subtraction operator
		double operator*(RationalNumber // Right hand side value
		); // Multiplication operator
		double operator/(RationalNumber // Right hand side value
		); // Division operator
		double operator==(RationalNumber // Right hand side value
		); // Equlaity Operator
		double operator<=(RationalNumber // Right hand side value
		); // Less than or equal to operator
		double operator>=(RationalNumber // Right hand side value
		); // Greater than or equal to operator
		double operator<(RationalNumber // Right hand side value
		); // Less than oeprator
		double operator>(RationalNumber // Right hand side value
		); // Greater than operator
		ostream& operator<<(RationalNumber // Right hand side value
		); // Stream insertion operator
		istream& operator>>(RationalNumber // Right hand side value
		); // Stream extraction operator
	private:
		string RationalNumber; // This is the rational number
};
#endif

