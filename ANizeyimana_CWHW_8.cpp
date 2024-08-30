/*
 * Class: CMSC140 CRN 40569
 * Instructor:Ara Kechiantz
 * HW 8
 * Description: Developping a program that:
•	Reads as many test scores as the user wants from the keyboard (assuming at most 50 scores).
o	Test scores should be whole numbers.
•	You must validate user input; only positive numbers are valid.
•	Prints the scores in 
o	original order
o	sorted from high to low 
o	the highest score
o	the lowest score
o	the average of the scores

 * Due Date: 8/9/2024
 * Platform/Compiler: Visual Studio 2022
 * I pledge that I have completed the programming assignment independently.
   I have not copied the code from a student or any source.
   I have not given my code to any student.
   Print your Name here: Alex Nizeyimana

#include <iostream>

using namespace std;

void displayArray(int array[], int size);
void selectionSort(int array[], int size);
int findMax(int array[], int size);
int findMin(int array[], int size);
double findAvg(int array[], int size);

int main() {
    int scores[50];
    int count = 0;
    int score;

    cout << "How many scores do you want to enter? ";
    cin >> count;

    if (count > 50) {
        cout << "You can enter at most 50 scores." << endl;
        return 1;
    }

    for (int i = 0; i < count; i++) {
        cout << "Enter score #" << i + 1 << ": ";
        cin >> score;

        if (cin.fail() || score < 0) {
            cin.clear();
            cin.ignore(10000, '\n'); 
            cout << "Invalid input. Please enter a positive whole number." << endl;
            i--; 
        }
        else {
            scores[i] = score;
        }
    }

    cout << "\nOriginal order scores are: ";
    displayArray(scores, count);

    selectionSort(scores, count);
    cout << "Scores ordered high to low: ";
    displayArray(scores, count);

    cout << "Highest score: " << findMax(scores, count) << "\n\n";
    cout << "Lowest score: " << findMin(scores, count) << "\n\n";
    cout << "Average of scores: " << findAvg(scores, count) << "\n\n";

    return 0;
}

void displayArray(int array[], int size) {
    for (int i = 0; i < size; i++) {
        cout << array[i] << " ";
    }
    cout << endl;
}

void selectionSort(int array[], int size) {
    for (int i = 0; i < size - 1; i++) {
        int maxIndex = i;
        for (int j = i + 1; j < size; j++) {
            if (array[j] > array[maxIndex]) {
                maxIndex = j;
            }
        }
        swap(array[i], array[maxIndex]);
    }
}

int findMax(int array[], int size) {
    int max = array[0];
    for (int i = 1; i < size; i++) {
        if (array[i] > max) {
            max = array[i];
        }
    }
    return max;
}

int findMin(int array[], int size) {
    int min = array[0];
    for (int i = 1; i < size; i++) {
        if (array[i] < min) {
            min = array[i];
        }
    }
    return min;
}

double findAvg(int array[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += array[i];
    }
    return static_cast<double>(sum) / size;
}
*/