/*
 * OverloadingUnaryOperator.cpp
 *
 *  Created on: 01-Feb-2020
 *      Author: sachin kurude
 */
// C++ program to show unary operator overloading
#include <iostream>

using namespace std;

class Distance {
public:

    // Member Object
    int feet, inch;

    // Constructor to initialize the object's value
    Distance(int f, int i)
    {
        this->feet = f;
        this->inch = i;
    }

    // Overloading(-) operator to perform decrement
    // operation of Distance object
    void operator-()
    {
        feet--;
        inch--;
        cout << "\nFeet & Inches(Decrement): " << feet << "'" << inch;
    }
    void operator++()
    {
        feet++;
        inch++;
        cout << "\nFeet & Inches(Decrement): " << feet << "'" << inch;
    }
};

// Driver Code
int main()
{
    // Declare and Initialize the constructor
    Distance d1(8, 9);

    // Use (-) unary operator by single operand
    -d1;
    ++d1;
    return 0;
}
