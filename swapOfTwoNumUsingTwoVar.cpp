/*
 * swapOfTwoNumUsingTwoVar.cpp
 *
 *  Created on: 29-Jan-2020
 *      Author: sachin kurude
 */
#include<iostream>
using namespace std;
int main()
{
	//Swapping of two number using two variable
	int a,b;
	cout<<"Enter Two Integer number:\n";
		cin>>a>>b;
	cout<<"Before Swapping: "<<"A = "<<a<<" B = "<<b<<endl;

		a=a+b;
		b=a-b;
		a=a-b;

	cout<<"After Swapping: "<<"A = "<<a<<" B = "<<b<<endl;
}
