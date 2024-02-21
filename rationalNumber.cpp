#include "RationalNumber.h"

void RationalNumber::setRationalNumber(istream& in) 
{
	string rationalNumber; // A rational Number in the format int/int
	do
	{
		in >> rationalNumber;
	} 
	while (checkValidRationalNumber(rationalNumber));
} // Gets the rational number from the user
bool RationalNumber::checkValidRationalNumber(string& num) 
{
	for (int i = 0; i < num.size(); i++) 
	{
		// Checks if the inputed number has whitespace or alphabetic characters
		if (isspace(num.at(i)) || isalpha(num.at(i)))
		{
			cout << " Invalid rational number as it must be in the form \"int/int\" with no whitespace.";
			return false;
		}
	}
	return true;
}
void RationalNumber::simplifyRationalNumber()
{
	// Factor the fraction
	while (numerator % demoniator != 0)
	{
		demoniator = numerator % demoniator; // Sets demoniator to the remainder of the division
		numerator = demoniator; // Sets numerator to the divisor
	}
	// Simplify the fraction
	numerator /= demoniator;
	demoniator /= demoniator;
}
void RationalNumber::outputRationalNumber(ostream& out) 
{
	out << " " << numerator << "/" << demoniator;
}
int RationalNumber::getNum() 
{
	return numerator;
}
void RationalNumber::setNum(int value) 
{
	numerator = value;
}
int RationalNumber::getDen() 
{
	return demoniator;
}
void RationalNumber::setDen(int value) 
{
	demoniator = value;
}

double operator+(RationalNumber& num2)
{
	RationalNumber output;
}

