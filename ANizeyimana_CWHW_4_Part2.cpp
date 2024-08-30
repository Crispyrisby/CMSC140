/*
 * Class: CMSC140 CRN 40569
 * Instructor:Ara Kechiantz
 * HW 4 Part 2
 * Description: a program to determine the price for a custom shop sign. The price is determined by the number of colors in the sign, if the sign will have lighting, and if an old sign must be removed.
 * Due Date: 6/21/2024
 * Platform/Compiler: Visual Studio 2022
 * I pledge that I have completed the programming assignment independently.
   I have not copied the code from a student or any source.
   I have not given my code to any student.
   Print your Name here: Alex Nizeyimana
*/

#include<iostream>
#include<iomanip>
#include <string>

using namespace std;
int main()
{


	cout << fixed << setprecision(2) << showpoint; //alows us to have the decimal points


	//the menu option
	int numColors;
	cout << "Enter the number of colors in the sign: ";
	cin >> numColors;

	
	//the starting price
	double basePrice = 0.0;

	//the switch statment for the colors in the sign
	switch (numColors)
	{
	case 1:
		basePrice = 250.0;
		break;
	case 2:
		basePrice = 325.0;
		break;
	case 3:
		basePrice = 450.0;
		break;
	case 4:
		basePrice = 625.0;
		break;
	default:
		basePrice = 850.0;
		break;
	}

	if (numColors <= 0)
	{
		cout << "Invalid number of colors. Please enter a number greater than 0.\n";
		return 0;
	}

	
	//allows us to do the calculation
	double price;
	double secondPrice;


	// the code for if the customer wants lighted sign
	string lightedSign;
	string y;
	string n;
	cout << "Do you want a lighted sign? (y or n) ";
	cin >> lightedSign;

	if (lightedSign == "y")
		price = basePrice + (0.25 * basePrice);
	else
	{
		price = basePrice;
	}

	// the code for if the customer wants the old sign removed
	string oldSign;
	cout << "Do you need an old sign removed? (y or n) ";
	cin >> oldSign;

	if (oldSign == "y")
		secondPrice = price + (0.10 * basePrice);
	else
	{
		secondPrice = price;
	}



	cout << "the price is: $" << secondPrice << "\n\n";

	cout << "Programmer: Alex Nizeyimana\n\n";



	return 0;
}