#include "RationalNumber.h"
void RationalNumber::setRationalNumber(istream& in) 
{
	string rationalNumber; // A rational Number in the format int/int
	// As long as the inputted number is invalid keep repeating inputting the number
	do
	{
		in >> rationalNumber;
	} 
	while (checkValidRationalNumber(rationalNumber));
	// If an integer is inputted set the denominator to zero
	if (rationalNumber.find_first_of('/') == -1)
	{
		numerator == std::stoi(rationalNumber);
		denominator == 1;
		return;
	}
} // Gets the rational number from the user
bool RationalNumber::checkValidRationalNumber(string& num) 
{
	for (int i = 0; i < num.size(); i++) 
	{
		// Checks if the inputed number has whitespace or alphabetic characters
		if (isspace(num.at(i)) || isalpha(num.at(i)))
		{
			cout << " Invalid rational number as it must be in the form \"int/int\" with no whitespace.";
			cin.ignore(INT_MAX);
			cin.clear();
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
		num.setDen(num.getNum() % num.getDen()); // Sets denominator to the remainder of the division
		num.setNum(num.getDen()); // Sets numerator to the divisor
	}
	// Simplify the fraction
	num.setNum(num.getNum()/num.getDen());
	num.setDen(num.getDen()/num.getDen());
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
	output.setDen(denominator);
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
bool RationalNumber::operator<=(RationalNumber& num2) 
{
	return ((double)numerator / (double)denominator) <= ((double)num2.getNum() / (double)num2.getDen());
}
bool RationalNumber::operator>=(RationalNumber& num2) 
{
	return ((double)numerator / (double)denominator) >= ((double)num2.getNum() / (double)num2.getDen());
}
bool RationalNumber::operator<(RationalNumber& num2) 
{
	return ((double)numerator / (double)denominator) < ((double)num2.getNum() / (double)num2.getDen());
}
bool RationalNumber::operator>(RationalNumber& num2) 
{
	return ((double)numerator / (double)denominator) > ((double)num2.getNum() / (double)num2.getDen());
}
ostream& operator<<(ostream& out, RationalNumber& num) 
{
	num.outputRationalNumber(out);
	return out;
}
istream& operator>>(istream& in, RationalNumber& num) 
{
	num.setRationalNumber(in);
	return in;
} 
bool doesUserContinue() 
{
	
}
