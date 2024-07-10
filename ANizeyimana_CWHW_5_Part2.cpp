/*
 * Class: CMSC140 CRN 40569
 * Instructor:Ara Kechiantz
 * HW 5
 * Description: program that prompts the user for the user's namep, phone number, street address, city, state, and zip code> After that displaying the user input and putting in a list
 * Due Date: 6/28/2024
 * Platform/Compiler: Visual Studio 2022
 * I pledge that I have completed the programming assignment independently.
   I have not copied the code from a student or any source.
   I have not given my code to any student.
   Print your Name here: Alex Nizeyimana



#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main()
{
	
	
	string name, phone, streetAddress, city, state, zip;
	
	cout<< "Enter name: ";
	getline(cin,name);
	cout << "Enter your phone number: ";
	getline(cin, phone);
	cout << "Enter your street address: ";
	getline(cin, streetAddress);
	cout << "Enter your city: ";
	getline(cin, city);
	cout << "Enter your state: ";
	getline(cin, state);
	cout << "Enter your zip code: ";
	getline(cin, zip);
	cout << "\n";
	cout << "This is your information.\n" ;

	cout<< "Name: " << name << endl;
	cout << "Phone: " << phone << endl;
	cout << "Address: " << streetAddress << "\n" << city <<", " << state <<", " << zip<<endl;

	ofstream outFile;
	outFile.open("list.txt");	

	fstream inFile;
	inFile.open("list.txt");
	if (inFile.fail())
	{
		cerr << "File did not open" << endl;
		exit(1);
	}

	outFile << "Name: " << name << endl;
	outFile << "Phone: " << phone << endl;
	outFile << "Street address: " << streetAddress << endl;
	outFile << "City: " << city << endl;
	outFile << "State: " << state << endl;
	outFile << "ZIP: " << zip << endl;

	outFile.close();

	cout << "Data written to list.txt successfully!" << endl;

	
	return 0;
}

*/