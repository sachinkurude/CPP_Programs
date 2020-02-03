/*
 * switchCase.cpp
 *
 *  Created on: 04-Feb-2020
 *      Author: sachin kurude
 */
#include <iostream>
using namespace std;
int main()
{
    char o;
    float num1, num2;
    cout << "Enter an operator (+, -, *, /): "<<endl;
    cin >> o;
    cout << "Enter two operands: "<<endl;
    cin >> num1 >> num2;

    switch (o)
    {
        case '+':
            cout << num1 << " + " << num2 << " = " << num1+num2;
            break;
        case '-':
            cout << num1 << " - " << num2 << " = " << num1-num2;
            break;
        case '*':
            cout << num1 << " * " << num2 << " = " << num1*num2;
            break;
        case '/':
            cout << num1 << " / " << num2 << " = " << num1/num2;
            break;
        default:
            // operator is doesn't match any case constant (+, -, *, /)
            cout << "Error! operator is not correct";
            break;
    }

    return 0;
}
