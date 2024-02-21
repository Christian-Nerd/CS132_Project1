#ifndef RN
#define RN
#include <iostream>
using namespace std;
class RationalNumber
{
	public:
		void setRationalNumber(istream&); // Gets the rational number from the user
		bool checkValidRationalNumber(string&); // Checks if a rational number is valid
		void simplifyRationalNumber(RationalNumber&); // Simplifies the rational number
		void outputRationalNumber(ostream&); // Outputs rational number function
		int getNum(); // Gets Numerator
		void setNum(int); // Sets Numerator
		int getDen(); // Gets Denomiator
		void setDen(int); // Sets Denomiator
		RationalNumber operator+(RationalNumber& // Right hand side value 
			); // Addition operator
		RationalNumber operator-(RationalNumber& // Right hand side value
		); // Subtraction operator
		RationalNumber operator*(RationalNumber& // Right hand side value
		); // Multiplication operator
		RationalNumber operator/(RationalNumber& // Right hand side value
		); // Division operator
		bool operator==(RationalNumber& // Right hand side value
		); // Equlaity Operator
		bool operator<=(RationalNumber& // Right hand side value
		); // Less than or equal to operator
		bool operator>=(RationalNumber& // Right hand side value
		); // Greater than or equal to operator
		bool operator<(RationalNumber& // Right hand side value
		); // Less than oeprator
		bool operator>(RationalNumber& // Right hand side value
		); // Greater than operator
		ostream& operator<<(RationalNumber& // Right hand side value
		); // Stream insertion operator
		istream& operator>>(RationalNumber& // Right hand side value
		); // Stream extraction operator
	private:
		string num; // This is the rational number
		int numerator = 0, denominator = 1; // These numbers represent the top & bottom part of the fraction
};
#endif

