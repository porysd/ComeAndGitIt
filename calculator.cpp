#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    cout << "CALCULATOR BY POWDI" << endl
        << "----------------------" << endl;
    int firstNumber, secondNumber, sumOfTwoNumbers, diffOfTwoNumbers, prodOfTwoNumbers, quotOfTwoNumbers, modOfTwoNumbers;
    int powOfFirstNumber;

    cout << "Enter first number: ";
    cin >> firstNumber;

    cout << "Enter second number: ";
    cin >> secondNumber;

    sumOfTwoNumbers = firstNumber + secondNumber;
    diffOfTwoNumbers = firstNumber - secondNumber;
    prodOfTwoNumbers = firstNumber * secondNumber;
    quotOfTwoNumbers = firstNumber / secondNumber;
    modOfTwoNumbers = firstNumber % secondNumber;

    cout << endl << firstNumber << " + " << secondNumber << " = " << sumOfTwoNumbers;
    cout << endl << firstNumber << " - " << secondNumber << " = " << diffOfTwoNumbers;
    cout << endl << firstNumber << " * " << secondNumber << " = " << prodOfTwoNumbers;
    cout << endl << firstNumber << " / " << secondNumber << " = " << quotOfTwoNumbers;
    cout << endl << firstNumber << " % " << secondNumber << " = " << modOfTwoNumbers;
    cout << endl << pow(firstNumber, 3);

    return 0; 
}