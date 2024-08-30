/*
 * Class: CMSC140 CRN 40569
 * Instructor:Ara Kechiantz
 * Project 1 
 * Description: I am writing a code that welcomes an individual. The program starts by greeting the user and asks for their name. Then asks the user for their favorite number.
 * Afterwards calculates and displays various mathematical operations on the number.Finally asks the user for two numbers and demonstrates integer and floating-point division.
 * Due Date: 6/7/2024
 * Platform/Compiler: Visual Studio 2022
 * I pledge that I have completed the programming assignment independently.
   I have not copied the code from a student or any source.
   I have not given my code to any student.
   Print your Name here: Alex Nizeyimana
*/

#include <iostream>
#include <string>
#include <cmath>
using namespace std;
int main()
{
	//Variables 
	string name;
	int favorite_number,first_whole, second_whole;
	int ndouble; //double the favorite number
	const int two = 2;
	float half;
	double square, sroot; //sroot means square root
	const string programmer = "Alex Nizeyimana";
	const string assignment = " 1";
	const string Due_Date = "June 7, 2024";



	cout << "********** Welcome to Programming Event **********" << "\n \n"	;
	//Code to greet the user, get the user's name and the user's for their favorite number.
	cout << "Hello! What is your name?" << endl;
	cin >> name;
	cout << "\n";
	cout << "Nice to meet you, " << name << "!" << endl;
	cout << "Tell me, " << name << ", what's your favorite number?" << endl;
	cin >> favorite_number;
	cout << "\n";
	cout << "Great choice! Here are some fun facts about the number " << favorite_number << ":" << endl;

	//Code to calculates and displays various mathematical operations on the number.
	ndouble = favorite_number * two;
	half = (float)favorite_number / two;
	square = pow(favorite_number,two);
	sroot = sqrt(favorite_number);

	//Outpur of the favorite number code
	cout << "- Double of " << favorite_number << " is " << ndouble << "." << endl;
	cout << "- Half of " << favorite_number << " is " << half << "." << endl;
	cout << "- " << favorite_number << " squared is " << square << "." << endl;
	cout << "- Square root of " << favorite_number << " is approximately " << sroot << "." << endl;
	cout << "\n";

	//Code to asks the user for two numbers and demonstrates integer and floating-point division.
	cout << "Now, " << name << ", let's explore division. Give me the whole number."<<endl;
	cin >> first_whole;
	cout << "Now, give me another whole number."<<endl;
	cin >> second_whole;
	cout << "\n";

	//Putting division as variable
	int Idivision = first_whole / second_whole;
	float Fdivision = (float)first_whole / second_whole;

	//Output of the sum and division
	cout << "Using integer division," << first_whole << " divided by " << second_whole << " is " << Idivision << "\n";
	cout << "Using floating point division, " << first_whole << " divided by " << second_whole << " is approximately " << Fdivision << ".\n \n";

	// Outputing the outro
	cout << "Thank you for participating, " << name << "!" << endl;
	cout << "PROGRAMMER: " << programmer << "\n";
	cout << "CMSC140 Project " << assignment << "\n";
	cout << "Due Date: " << Due_Date << "\n";

	return 0;
}