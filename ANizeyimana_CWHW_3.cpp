/*
 * Class: CMSC140 CRN 40569
 * Instructor:Ara Kechiantz
 * HW 3
 * Description: I am writing a program that gets the user name and calculates the sum and average of all grades
 * Due Date: 6/14/2024
 * Platform/Compiler: Visual Studio 2022
 * I pledge that I have completed the programming assignment independently.
   I have not copied the code from a student or any source.
   I have not given my code to any student.
   Print your Name here: Alex Nizeyimana
*/
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main()
{

	string name;
	int syl1abus, chap1, chap2, class1, class2, total;
	double average;
	cout << setprecision(2) << fixed << showpoint;
	//Get input
	cout << "Enter student's full name: ";
	getline(cin, name);
	cout << "Enter Syllabus Quiz score ranging from 0-100: ";
	cin >> syl1abus;
	cout << "Enter Chapter 1 Quiz score ranging from 0-100: ";
	cin >> chap1;
	cout << "Enter Chapter 2 Quiz score ranging from 0-100: ";
	cin >> chap2;
	cout << "Enter Classwork 1 score ranging from 0-100: ";
	cin >> class1;
	cout << "Enter Classwork 2 score ranging from 0-100: ";
	cin >> class2;

	//find total and average

	total = syl1abus + chap1 + chap2 + class1 + class2;
	average = (total / 5.0);

	//Output results

	cout << endl << name << " : " << "Final Score: " << total << " Average Score: " << average;
	
	return 0;
}

