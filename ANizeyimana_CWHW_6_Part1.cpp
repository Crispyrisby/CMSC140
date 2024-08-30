/*
 * Class: CMSC140 CRN 40569
 * Instructor:Ara Kechiantz
 * HW 6 part 1
 * Description: a program that allows the user to choose addition or subtraction operations on two whole numbers entered from the keyboard
 * Due Date: 7/12/2024
 * Platform/Compiler: Visual Studio 2022
 * I pledge that I have completed the programming assignment independently.
   I have not copied the code from a student or any source.
   I have not given my code to any student.
   Print your Name here: Alex Nizeyimana



#include <iostream>
using namespace std;
char getChoice();
int subtraction(int, int);
void displayResult(int);
int addition(int, int);
void getNumbers(int&, int&);


int main()
{
    int num1, num2;
    char operation = getChoice();

    getNumbers(num1, num2);

    switch (operation) {
    case '1':
        displayResult(addition(num1, num2));
        break;
    case '2':
        displayResult(subtraction(num1, num2));
        break;
    default:
        cout << "Invalid choice. Please choose 1 or 2." << endl;
    }

    return 0;
}


char getChoice()
{
    char choice;
    cout << "Choose operation, 1 for addition, 2 for subtraction: ";
    do
    {
        cin >> choice;
        if (choice != '1' && choice != '2')
        {
            cout << "Invalid choice. Please enter 1 or 2: ";
        }
    } while (choice != '1' && choice != '2');

    return choice;
}

void getNumbers(int& num1, int& num2) 
{
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;
}

int addition(int a, int b) 
{
    return a + b;
}

int subtraction(int a, int b)
{
    return a - b;
}

void displayResult(int result) 
{
    cout << "The result of the operation is: " << result << endl;
}

 */