/*
 * Class: CMSC140 CRN 40569
 * Instructor:Ara Kechiantz
 * HW 4 Part 1
 * Description:a program that asks for the number of tickets sold and computes the total cost of the purchase at Walt Disney World 
 * Due Date: 6/21/2024
 * Platform/Compiler: Visual Studio 2022
 * I pledge that I have completed the programming assignment independently.
   I have not copied the code from a student or any source.
   I have not given my code to any student.
   Print your Name here: Alex Nizeyimana


#include <iostream>
#include <iomanip>
using namespace std;

int main()
{

	cout << setprecision(2) << fixed << showpoint;

	double discount, cost, totalCost;
	const double UNIT_COST = 109.00;

	//prompt for and inpunt the number of days 
	cout << "How many days of tickets were sold? ";
	int ticketsSold;
	cin >> ticketsSold;
	// if not a valid number of days
	if (ticketsSold <= 0)
		cout << "Tickets sold must be greater than zero.\n" << endl; //ouput an error message


	//otherwise,
	else
	{
		//determine the discount
		if (ticketsSold >= 3 && ticketsSold <= 4)
			discount = 0.10;
		else if (ticketsSold >= 5 && ticketsSold <= 6)
			discount = 0.25;
		else if (ticketsSold >= 7 && ticketsSold <= 9)
			discount = 0.33;
		else
			discount = .33;
	
		//compute the unit cost after the discount
		cost = UNIT_COST * ticketsSold;
		//compute the total cost 
		totalCost = cost - (cost * discount);
		//output the total cost
		cout << "The total cost of the purchase is $" << totalCost << "\n";
	}

	return 0;
}
*/