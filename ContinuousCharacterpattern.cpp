/*
 * ContinuousCharacterpattern.cpp
 *
 *  Created on: 03-Feb-2020
 *      Author: sachin kurude
 */
// C++ code to demonstrate printing pattern of alphabets
#include <iostream>
using namespace std;

// Function to demonstrate printing pattern
void contalpha(int n)
{
	// initializing value corresponding to 'A'
	// ASCII value
	int num = 65;

	// outer loop to handle number of rows
	// n in this case
	for (int i=0; i<n; i++)
	{
		// inner loop to handle number of columns
		// values changing acc. to outer loop
		for (int j=0; j<=i; j++ )
		{
			// explicitely converting to char
			char ch = char(num);

			// printing char value
			cout << ch << " ";

			// incrementing number at each column
			num = num + 1;
		}

		// ending line after each row
		cout << endl;
	}
}

// Driver Function
int main()
{
	int n = 5;
	contalpha(n);
	return 0;
}
