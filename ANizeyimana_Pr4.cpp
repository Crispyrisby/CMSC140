/*
#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
using namespace std;

int numOfEmployees();
int totDaysAbsent(int);
double averageAbsent(int, int);



int main()
{
	ofstream employeeAbsencesFile;
	employeeAbsencesFile.open("employeeAbsences.txt");
	int employed = numOfEmployees();
	int totalGone = totDaysAbsent(employed);
	double totalAverage = averageAbsent(employed, totalGone);

	cout << "Programmer Alex Nizeyimana" << endl;
	cout << "Due 7/27/2024" << endl;

	return 0;
}


int numOfEmployees()
{

	int num;
	cout << "Please enter the number of the employees in the company: ";
	cin >> num;
	do
	{
		cout << "Please enter the number of employees in the company: ";
		cin >> num;
		if (num < 1)
		{
			cout << "The number of employees must be greater than 0. Please re-enter." << endl;
		}
	} while (num < 1);
	return num;

}


int totDaysAbsent(int employed)
{
	ofstream outFile;
	outFile.open("employeeAbsences.txt");
	outFile << "Employee Id" << "  " << "days absent" << endl;

	int gone;
	int id;
	int total = 0;
	double average = 0.0;

	for (int i = 0; i < employed; i++)
	{

		cout << "Please enter an employee ID: ";
		cin >> id;
		cout << "Please enter the number of days this employee was absent: ";
		cin >> gone;

		if (gone < 0)
		{
			cout << "The number of days must not be negative." << endl;
			cout << "Please re-enter the number of days absent: ";
			cin >> gone;
		}
		outFile << setw(5) << id << setw(13) << gone << endl;

		total += gone;

		//average of employees
		average = total / employed;

	}


	outFile << "\nThe " << employed << " employees were absent a total of " << total << " days" << endl;
	cout << fixed << showpoint << setprecision(1);
	outFile << "The average number of days absent is " << average << " days" << endl << endl;


	outFile.close();
	return total;

}


double averageAbsent(int numOfEmployees, int totDaysAbsent)
{

	double average = (totDaysAbsent / numOfEmployees);
	return average;
}
*/