/*
 * swapOfTwoNumUsingThreeVar.cpp
 *
 *  Created on: 29-Jan-2020
 *      Author: sachin kurude
 */
#include<iostream>
using namespace std;
int main()
{
	//Swapping of two number using three variable
	int a,b,t;
	cout<<"Enter Two Integer number:\n";
		cin>>a>>b;
	cout<<"Before Swapping: "<<"A = "<<a<<" B = "<<b<<endl;
		t=b;
		b=a;
		a=t;
	cout<<"After Swapping: "<<"A = "<<a<<" B = "<<b<<endl;
}
