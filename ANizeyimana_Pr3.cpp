/*
 * Class: CMSC140 CRN 40569
 * Instructor:Ara Kechiantz
 * Project 3
 * Description: a program that calculates the occupancy rate and the total hotel income for one night and displays this information as well as some other information
 * Due Date: 7/5/2024
 * Platform/Compiler: Visual Studio 2022
 * I pledge that I have completed the programming assignment independently.
   I have not copied the code from a student or any source.
   I have not given my code to any student.
   Print your Name here: Alex Nizeyimana


#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
int main()
{
	//Title
	cout << "-----------------------------------------------------------------------";
	cout << "\n \t \t BlueMont Hotel\n";
	cout << "-----------------------------------------------------------------------";


	//var
	string hotelName;
	int numFloors, numRooms, singleRooms, doubleRooms, kingRooms, suiteRooms, sum, unoccupied, min, floors;
	const int singleRate=60, doubleRate=75, kingRate=100, suiteRate=150;
	double income=0.0, totalRooms=0, occupiedRooms=0,occupancyRate=0.0;


	//Location
	cout << "\nEnter the location of this Hotel Chain: ";
	getline(cin, hotelName);
	cout << "Enter total number of floors of the hotel: ";
	cin >> numFloors;
	
	while (numFloors<1||numFloors>5)
	{
		cout << "number of floors should be between 1 and 5 !! Please try again.\n";
		cout << "Enter total number of floors of the hotel: ";
		cin >> numFloors;
	}

	for (floors=1; floors <= numFloors;floors++)
	{
		cout << "Enter the number of rooms of the hotel "<<floors<<"th Floor : ";
		cin >> numRooms;
		while (numRooms <= 0 || numRooms > 30)
		{
			cout << "number of rooms should be between 1 and 30 !! Please try again. \n";
			cout << "Enter the number of rooms of the hotel "<<floors << "th Floor: ";
			cin >> numRooms;
		}
		do
		{

			cout << "How many SINGLE rooms are occupied in the " << numRooms << "th floor: ";
			cin >> singleRooms;



			cout << "How many DOUBLE rooms are occupied in the " << numRooms << "th floor: ";
			cin >> doubleRooms;



			cout << "How many KING rooms are occupied in the " << numRooms << "th floor: ";
			cin >> kingRooms;



			cout << "How many SUITE are occupied in the " << numRooms << "th floor: ";
			cin >> suiteRooms;


			sum = singleRooms + doubleRooms + kingRooms + suiteRooms;

			if (sum> numRooms)
			{
				cout << "Total occupied rooms exceed the total number of rooms on this floor. Please re-enter.\n";
			}


		} while (sum > numRooms);
	

		// Update totals
		occupiedRooms += singleRooms + doubleRooms + kingRooms + suiteRooms;
		totalRooms += numRooms;
		income += singleRooms * singleRate + doubleRooms * doubleRate +
			kingRooms * kingRate + suiteRooms * suiteRate;
	}
	unoccupied = totalRooms - occupiedRooms;
	occupancyRate = (occupiedRooms / totalRooms) * 100;

	cout << "-----------------------------------------------------------------------";
	cout << "\n \t \t BlueMont Hotel located in"<<hotelName<<endl;
	cout << "-----------------------------------------------------------------------";

	cout << "\t \nToday's Room Rates (Us$/night)"<<endl;

	cout << right << setw(15) << "Single Room " << setw(15) << " Double Room " << setw(15) << " King Room " << setw(15) << " Suite Room "<<endl;
	cout << right << setw(10) << singleRate << setw(15) << doubleRate << setw(20) << kingRate << setw(15) << suiteRate<<endl;

	cout << "-----------------------------------------------------------------------"<<endl<<endl;


	cout << right << setw(15) << "Hotel Income: " << right << setw(10) << "$" << income<<endl;
	cout << right << setw(15) << "Total # of rooms: " << right << setw(10) << totalRooms<<endl;
	cout << right << setw(15) << "Total # Occupied rooms: " << right << setw(10) << occupiedRooms<<endl;
	cout << right << setw(15) << "Total # Unoccupied rooms: " << right << setw(10) << unoccupied<<endl;
	cout << right << setw(15) << "Occupancy rate: " << right << setw(10) << occupancyRate<<"%"<<endl<<endl	;

	cout << floors<<"th Floor with" << numRooms<<"rooms, has the least number of rooms."<<endl;
	if (occupancyRate < 60)
	{
		cout << "Need to improve hotel occupancy rate!\n";
	}
	else
	{
		cout << "Thank you for testing my program!\n";
		cout << "PROGRAMMER: Alex Nizeyimana\n";
		cout << "CMSC140 Common Project 3\n";
		cout << "Due Date: 7/5/2024\n";
	}


	return 0;
}
 */