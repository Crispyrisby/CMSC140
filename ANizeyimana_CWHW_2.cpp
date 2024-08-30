/*
 * Class: CMSC140 CRN 40569
 * Instructor:Ara Kechiantz
 * HW 2
 * Description: I am writing a program that displays my name, address, phone number, and my major
 * Due Date: 6/7/2024
 * Platform/Compiler: Visual Studio 2022
 * I pledge that I have completed the programming assignment independently.
   I have not copied the code from a student or any source.
   I have not given my code to any student.
   Print your Name here: Alex Nizeyimana
*/
#include <iostream>
#include <string>
using namespace std;
int main()
{
	const string Name = "Alex Nizeyimana";
	const string major = "Computer Science";
	string phone_number = "301-123-7869";
	string address = "765 main st. Rockville, MD 20877";

	cout << Name << endl << address << endl << phone_number << endl << major << endl;
	return 0;
}