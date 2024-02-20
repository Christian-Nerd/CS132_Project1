#include "rationalNumber.h"

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
void RationalNumber::outputRationalNumber(ostream& out) 
{
	out << " " << numerator << "/" << demoniator;
}
