/*
 * Class: CMSC140 CRN 40569
 * Instructor:Ara Kechiantz
 * HW 7
 * Description: The program has a function named largerThanN that takes an integer array, its size, and an integer number, and displays all array elements greater than the number.
 * Due Date: 8/2/2024
 * Platform/Compiler: Visual Studio 2022
 * I pledge that I have completed the programming assignment independently.
   I have not copied the code from a student or any source.
   I have not given my code to any student.
   Print your Name here: Alex Nizeyimana

#include <iostream>
using namespace std;

// Function prototype
void largerThanN(int array[], int size, int n);

int main()
{
    // Create an array named numbers containing 10 integers
    int numbers[] = { 30, 20, 50, 2, -1, 44, 3, 12, 90, 32 };
    int size = 10; // Size of the array

    // Ask the user to enter a number
    int num;
    cout << "Enter a number: ";
    cin >> num;

    // Call the function largerThanN and pass the array, the size, and the number that user entered
    largerThanN(numbers, size, num);

    return 0;
}

// Function definition
void largerThanN(int array[], int size, int n)
{
    cout << "The numbers that are larger than " << n << " are: ";
    for (int i = 0; i < size; i++) {
        if (array[i] > n) {
            cout << array[i] << " ";
        }
    }
    cout << endl;
}
*/
