/*
 * Class: CMSC140 CRN 40569
 * Instructor:Ara Kechiantz
 * HW 6 part 2
 * Description: a program working as a soda vending machine. The program should show the product menu with price and take user input for product number,
 * quantity and pay amount. The output should show the total sale price including tax and the change.
 * Due Date: 7/12/2024
 * Platform/Compiler: Visual Studio 2022
 * I pledge that I have completed the programming assignment independently.
   I have not copied the code from a student or any source.
   I have not given my code to any student.
   Print your Name here: Alex Nizeyimana
*/
#include <iostream>
#include <iomanip>
using namespace std;

double showMenu();
double takePurchase(double);
double calculateTotal(double, double&);
double takePayment();

int main()
{
    double itemPrice = showMenu();
    double purchasePrice = takePurchase(itemPrice);
    double payment = takePayment();
    cout << endl;
    double taxAmount;
    double totalAmount = calculateTotal(purchasePrice, taxAmount);

    if (payment >= totalAmount)
    {
        double change = payment - totalAmount;
        cout << "Change: $" << fixed << setprecision(2) << change << endl;
    }
    else
    {
        cout << "Insufficient payment. Please pay the remaining amount." << endl;
    }

    return 0;
}

double showMenu()
{
    cout << "**** Vending Machine ****" << endl;
    cout << "1. Coke $1.75" << endl;
    cout << "2. Pepsi $1.00" << endl;
    cout << "3. Water $2.00" << endl;
    cout << "4. Coffee $1.50" << endl;
    cout << "5. Exit Menu" << endl <<endl;

    int choice;
    cout << "Enter your choice: ";
    cin >> choice;

    switch (choice) {
    case 1:
        return 1.75;
    case 2:
        return 1.00;
    case 3:
        return 2.00;
    case 4:
        return 1.50;
    default:
        return 0.0;
    }
}

double takePurchase(double price)
{
    int quantity;
    cout << "How many do you want: ";
    cin >> quantity;
    return price * quantity;
}

double calculateTotal(double purchasePrice, double& taxAmount)
{
    const double TAX_RATE = 0.06;
    taxAmount = purchasePrice * TAX_RATE;
    double total = purchasePrice + taxAmount;
    cout << fixed << setprecision(2);
    cout << "Tax Amount: $" << taxAmount << endl;
    cout << "Total Purchase: $" << total << endl;
    return total;
}

double takePayment()
{
    double payment;
    cout << "How much is your payment? ";
    cin >> payment;
    return payment;
}
