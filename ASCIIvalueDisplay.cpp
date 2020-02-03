/*
 * ASCIIvalueDisplay.cpp
 *
 *  Created on: 04-Feb-2020
 *      Author: sachin kurude
 */
//Print ASCII Value in C++
#include <iostream>
using namespace std;
int main()
{
 char c;
 cout << "Enter a character: "<<endl;
 cin >> c;
 cout << "ASCII Value of " << c << " is " << int(c)<<endl;
 return 0;
}
