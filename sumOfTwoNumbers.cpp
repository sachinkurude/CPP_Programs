/*
 * sumOfTwoNumbers.cpp
 *
 *  Created on: 29-Jan-2020
 *      Author: sachin kurude
 */
#include <iostream>
using namespace std;
int main()
{
    int firstNumber, secondNumber, sumOfTwoNumbers;

    cout << "Enter two integers: ";
    cin >> firstNumber >> secondNumber;
    // sum of two numbers in stored in variable sumOfTwoNumbers
    sumOfTwoNumbers = firstNumber + secondNumber;
    // Prints sum
    cout << firstNumber << " + " <<  secondNumber << " = " << sumOfTwoNumbers;
    return 0;
}
