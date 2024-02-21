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
void RationalNumber::simplifyRationalNumber(RationalNumber& num)
{
	// Factor the fraction
	while (num.getNum() % num.getDen() != 0)
	{
		num.setDen(numerator % denominator); // Sets denominator to the remainder of the division
		numerator = denominator; // Sets numerator to the divisor
	}
	// Simplify the fraction
	numerator /= denominator;
	denominator /= denominator;
}
void RationalNumber::outputRationalNumber(ostream& out) 
{
	out << " " << numerator << "/" << denominator;
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
	return denominator;
}
void RationalNumber::setDen(int value) 
{
	denominator = value;
}

RationalNumber RationalNumber::operator+(RationalNumber& num2)
{
	RationalNumber output;
	// Multiples numerator and denominator of both numbers by each other's demonator
	numerator *= num2.getDen();
	denominator *= num2.getDen();
	num2.setNum(num2.getNum() * denominator);
	num2.setDen(num2.getDen() * denominator);
	// Set the output
	output.setNum(num2.getNum() + numerator);
	output.setDen(denominator);
	//Simplify the fraction after the operation
	simplifyRationalNumber(*this);
	simplifyRationalNumber(num2);
	simplifyRationalNumber(output);
	return output;
}
RationalNumber RationalNumber::operator-(RationalNumber& num2) 
{
	RationalNumber output;
	// Multiples numerator and denominator of both numbers by each other's demonator
	numerator *= num2.getDen();
	denominator *= num2.getDen();
	num2.setNum(num2.getNum() * denominator);
	num2.setDen(num2.getDen() * denominator);
	// Set the output
	output.setNum(num2.getNum() + numerator);
	output.setDen(denominator);
	//SImplify the fraction after the operation
	simplifyRationalNumber(*this);
	simplifyRationalNumber(num2);
	simplifyRationalNumber(output);
	return output;
}
RationalNumber RationalNumber::operator* (RationalNumber& num2) 
{
	RationalNumber output;
	output.setNum(numerator * num2.getNum());
	simplifyRationalNumber(output);
	return output;
}
RationalNumber RationalNumber::operator/ (RationalNumber& num2) 
{
	RationalNumber output;
	output.setNum(numerator / num2.getDen());
	output.setDen(numerator / num2.getNum());
	simplifyRationalNumber(output);
	return output;
}
bool RationalNumber::operator==(RationalNumber& num2) 
{
	return (numerator == num2.getNum() && denominator == num2.getDen());
}
