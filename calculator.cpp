#include <iostream>
using namespace std;

int main()
{
    int firstNumber, secondNumber, sumOfNumbers;

    cout << "Enter first number: ";
    cin >> firstNumber;

    cout << "Enter second number: ";
    cin >> secondNumber;

    sumOfNumbers = firstNumber + secondNumber;

    cout << endl << firstNumber << " + " << secondNumber << " = " << sumOfNumbers;

    return 0; 
}