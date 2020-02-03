/*
 * NumberPattern.cpp
 *
 *  Created on: 03-Feb-2020
 *      Author: sachin kurude
 */
// C++ code to demonstrate printing pattern of numbers
#include <iostream>
using namespace std;

// Function to demonstrate printing pattern
void numpat(int n)
{
	// initializing starting number
	int num = 1;

	// outer loop to handle number of rows
	// n in this case
	for (int i=0; i<n; i++)
	{

		// inner loop to handle number of columns
		// values changing acc. to outer loop
		for (int j=0; j<=i; j++ )
			cout << num << " ";

		// incrementing number at each column
		num = num + 1;

		// ending line after each row
		cout << endl;
	}
}

// Driver Function
int main()
{
	int n = 5;
	numpat(n);
	return 0;
}
