/*
 * Class: CMSC140 CRN 40569
 * Instructor:Ara Kechiantz
 * Project 2
 * Description: simulate a simple movie ticket booking system
 * Due Date: 6/21/2024
 * Platform/Compiler: Visual Studio 2022
 * I pledge that I have completed the programming assignment independently.
   I have not copied the code from a student or any source.
   I have not given my code to any student.
   Print your Name here: Alex Nizeyimana



#include <iostream>
using namespace std;
int main()
{
    // Constants
    const int G = 0;
    const int PG = 7;
    const int PG13 = 13;
    const int R = 17;
    const int NC17 = 18;


    const double adult = 10.0;
    const double child = 5.0;


    // Display list of movies
    cout << "********** Movie Ticket Booking **********" << endl << endl;
    cout << "Today's Movies: " << endl;
    cout << "1. \"The Matrix\" - Rated R" << endl;
    cout << "2. \"Star Wars: Episode V - The Empire Strikes Back\" - Rated PG" << endl;
    cout << "3. \"Inception\" - Rated PG - 13" << endl;
    cout << "4. \"Toy Story\" - Rated G" << endl;
    cout << "5. \"Crash\" - Rated NC - 17" << endl;

    // User selects a movie
    int movie;
    cout << "Please select a movie by entering its number: " << endl;
    cin >> movie;
    if (movie < 0)
    {
        cout << "Error: Invalid input. Number entered cannot be negative." << endl;
        return 0;
    }

    // User enters their age
    int user_age;
    cout << "Enter your age: " << endl;
    cin >> user_age;
    if (user_age < 0)
    {
        cout << "Error: Invalid input. Number entered cannot be negative." << endl;
    }

    // Check if user meets age requirement for the movie's rating
    bool ageRequirement = false;
    switch (movie)
    {
    case 1:
        if (user_age >= G)
        {
            ageRequirement = true;
        }
        break;
    case 2:
        if (user_age >= PG)
        {
            ageRequirement = true;
        }
        break;
    case 3:
        if (user_age >= PG13)
        {
            ageRequirement = true;
        }
        break;
    case 4:
        if (user_age >= R)
        {
            ageRequirement = true;
        }
        break;
    case 5:
        if (user_age >= NC17)
        {
            ageRequirement = true;
        }
        break;
    default:
        cout << "Error : Invalid input. Number entered cannot be negative." << endl;
        return 0;
    }

    // If age requirement is not met
    if (!ageRequirement)
    {
        cout << "You do not meet the age requirement for this movie." << endl;
        return 0;
    }

    // User enters number of adult and child tickets
    int numadult, numchild;
    cout << "How many adult tickets would you like to purchase? ";
    cin >> numadult;
    cout << "How many child tickets would you like to purchase? ";
    cin >> numchild;

    // Calculate total ticket cost
    double total = (numadult * adult) + (numchild * child);

    // User enters amount tendered
    double amountTendered;
    cout << "Enter the amount tendered: ";
    cin >> amountTendered;

    // Check if amount paid is greater than or equal to total ticket cost
    if (amountTendered < total)
    {
        cout << "Insufficient amount paid. Please try again." << endl;
        return 0;
    }
    else if (amountTendered < 0)
    {
        cout << "Error: Invalid input. Mumber entered cannot be negative." << endl;
    }

    // Calculate change to be returned
    double change = amountTendered - total;

    // Display ticket information
    cout << "Total  Cost: $" << total << endl;
    cout << "Please enter the amount you are tendering: $" << amountTendered << endl;
    cout << "Your change is: $" << change << ". Enjoy the movie" << endl;

    return 0;
}
*/