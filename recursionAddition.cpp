/*
 * recursionAddition.cpp
 *
 *  Created on: 04-Feb-2020
 *      Author: sachin kurude
 */
//Addition of 1 to 10 number using recursion
#include<iostream>
using namespace std;
int add(int);
int main()
{
int n=10,c;
cout<<"Addition of 1 to 10 number:"<<endl;
c=add(n);
cout<<"Addition ="<<c;
}
int add(int n)
{
	if(n==1)
	{
		return n;
	}
	else
	{
		return n+add(n-1);
	}
}
