// CS132_Project1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include "RationalNumber.h"
int main()
{
	bool choice = true, ValidOperator = true;
	RationalNumber num, num1, num2;
	cout << "Hello user this is a rational number processor." << endl;
	cout << "To use you must input a rational numbber in the form int/int any integers are automatically";
	cout << " processed as int/int." << endl;
	while (choice) 
	{
		string opselection; // User's operation choice
		// Convert selection to lower case ( in case user decises to quit
		if(ValidOperator)
			num.setRationalNumber(cin); // This is so that
		cout << " input your operation ";
		cin >> opselection;
		opselection = opselection.substr(0, 2);
		std::transform(opselection.begin(), opselection.end(), opselection.begin(), tolower); 
		if (isspace(opselection[1]) || opselection.size() == 1)
		{
			switch (opselection[0])
			{
			case '+':
				cout << "Great please input your next operand: ";
				ValidOperator = true;
				num1.setRationalNumber(cin);
				num2 = num1 + num;
				cout << num2;
				break;
			case '-':
				cout << "Great please input your next operand ";
				ValidOperator = true;
				num1.setRationalNumber(cin);
				num2 = num1 - num;
				cout << num2;
				break;
			case '<':
				cout << "Great please input your next operand: ";
				ValidOperator = true;
				num1.setRationalNumber(cin);
				if (num < num1)
					cout << "true";
				else
					cout << "false";
				break;
			case '>':
				cout << "Great please input your next operand: ";
				ValidOperator = true;
				num1.setRationalNumber(cin);
				if (num > num1)
					cout << "true";
				else
					cout << "false";
				break;
			case '*':
				cout << "Great please input your next operand: ";
				num1.setRationalNumber(cin);
				num2 = num * num1;
				cout << num2;
				ValidOperator = true;
				break;
				
			case '/':
				cout << "Great please input your next operand: ";
				num1.setRationalNumber(cin);
				num2 = num / num1;
				cout << num2;
				ValidOperator = true;
				break;
			default:
				cerr << endl << "Invalid operator." << endl;
				cin.clear();
				cin.ignore(INT_MAX, '\n');
				ValidOperator = false;
				continue;
				break;
			}
		}
		else
		{
			if (opselection == "<=")
			{
				cout << "Great please input your next operand: ";
				ValidOperator = true;
				num1.setRationalNumber(cin);
				if(num <= num1)
					cout << "true";
				else
					cout << "false";
			}
			else if (opselection == ">=")
			{
				cout << "Great please input your next operand: ";
				ValidOperator = true;
				num1.setRationalNumber(cin);
				if(num >= num1)
					cout << "true";
				else
					cout << "false";
			}
			else if (opselection == "==")
			{
				cout << "Great please input your next operand: ";
				ValidOperator = true;
				num1.setRationalNumber(cin);
				if(num == num1)
					cout << "true";
				else
					cout << "false";
			}
			else if (opselection == ">>")
			{
				ValidOperator = true;
				cin >> num1;
				if (!cin)
				{
					cin.clear();
					cin.ignore(INT_MAX, '\n');
				}
				cout << endl << num1;
			}
			else if (opselection == "<<")
			{
				ValidOperator = true;
				cout << endl << num;
			}
			else 
			{
				cout << " Invalid operator please renter.";
				cout << endl;
				cin.clear();
				cin.ignore(INT_MAX, '\n');
				ValidOperator = false;
				continue;
			}
		}
		// makes loop exit if user wants to stop
		choice = num.doesUserContinue();
	}
	cout << endl << "Goodbye then.";
	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
