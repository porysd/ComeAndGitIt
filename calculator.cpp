#include <iostream>
using namespace std;

int main()
{
    int firstNumber, secondNumber, sumOfTwoNumbers, diffOfTwoNumbers, prodOfTwoNumbers, quotOfTwoNumbers;

    cout << "Enter first number: ";
    cin >> firstNumber;

    cout << "Enter second number: ";
    cin >> secondNumber;

    sumOfTwoNumbers = firstNumber + secondNumber;
    diffOfTwoNumbers = firstNumber - secondNumber;
    prodOfTwoNumbers = firstNumber * secondNumber;
    quotOfTwoNumbers = firstNumber / secondNumber;

    cout << endl << firstNumber << " + " << secondNumber << " = " << sumOfTwoNumbers;
    cout << endl << firstNumber << " - " << secondNumber << " = " << diffOfTwoNumbers;
    cout << endl << firstNumber << " * " << secondNumber << " = " << prodOfTwoNumbers;
    cout << endl << firstNumber << " / " << secondNumber << " = " << quotOfTwoNumbers;

    return 0; 
}