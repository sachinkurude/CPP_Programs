/*
 * recursionFactorial.cpp
 *
 *  Created on: 04-Feb-2020
 *      Author: sachin kurude
 */
#include<iostream>
using namespace std;
int fact(int);
int main()
{
	int n,c;
	cout<<"Enter any number:"<<endl;
	cin>>n;
	c=fact(n);
	cout<<"Factorial "<<c<<endl;
}
int fact(int n)
{
	if(n==1)
	{
		return n;
	}
	else
	{
		return n*fact(n-1);
	}
}
