// CS132_Project1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "RationalNumber.h"
#include <algorithm>
int main()
{
	bool choice = true;
	RationalNumber num, num1, num2;
	cout << "Hello user this is a rational number processor." << endl;
	cout << "To use you must input a rational numbber in the form int/int any integers are automatically";
	cout << " processed as int/int." << endl;
	while (choice) 
	{
		string opselection; // User's operation choice
		// Convert selection to lower case ( in case user decises to quit
		std::transform(opselection.begin(), opselection.end(), opselection.begin(), tolower); 
		num.setRationalNumber(cin);
		cout << " input your operation ";
		cin >> opselection;
		opselection = opselection.substr(0, 1);
		if (isspace(opselection[1]) || opselection.size() == 1)
		{
			switch (opselection[0])
			{
			case '+':
				cout << "Great please input your next operand: ";
				num1.setRationalNumber(cin);
				num2 = num1 + num;
				cout << num2;
				break;
			case '-':
				cout << "Great please input your next operand";
				num1.setRationalNumber(cin);
				num2 = num1 - num;
				cout << num2;
				break;
			case '<':
				if (!isspace(opselection[1]) && (opselection[1] == '<'))
					cout << num;
				else if (!isspace(opselection[1]))
				{
					cout << "Great please input your next operand";
					num1.setRationalNumber(cin);
					if (num <= num1)
						cout << "true";
					else
						cout << "false";
				}
				else if (isspace(opselection[1]))
				{
					if (num < num1)
						cout << "true";
					else
						cout << "false";
				}
				break;
			case '>':
				if (!isspace(opselection[1]) && (opselection[1] == '>'))
				{
					cout << "Great please input your next operand";
					cin >> num1;
					cout << endl << num1;
				}
				else if (!isspace(opselection[1]))
				{
					cout << "Great please input your next operand";
					num1.setRationalNumber(cin);
					if (num >= num1)
						cout << "true";
					else
						cout << "false";
				}
				else if (isspace(opselection[1]))
				{
					if (num > num1)
						cout << "true";
					else
						cout << "false";
				}
				break;
			case '*':
				cout << "Great please input your next operand: ";
				num1.setRationalNumber(cin);
				num2 = num * num1;
				cout << num2;
				break;
				
			case '/':
				cout << "Great please input your next operand: ";
				num1.setRationalNumber(cin);
				num2 = num / num1;
				cout << num2;
				break;
			default:
				cerr << endl << "Invalid operator." << endl;
				break;
			}
		}
		// makes loop exit if user wants to stop
		else if (opselection == "exit" || opselection == "stop" || opselection == "quit")
			choice = false;
	}
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
