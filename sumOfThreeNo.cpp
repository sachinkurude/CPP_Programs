/*
 * sumOfThreeNo.cpp
 *
 *  Created on: 03-Feb-2020
 *      Author: sachin kurude
 */
//Accept 3 digit no and calculate sum of 3 digit
#include<iostream>
using namespace std;
int main()
{
	int n,a,b,c,sum;
	cout<<"Enter any 3 digit no:";
	cin>>n;
	a=n%10;
	n=n%10;
	b=n%10;
	n=n/10;
	c=n;
	sum=a+b+c;
	cout<<"sum of digit= "<<sum;
	return 0;
}
