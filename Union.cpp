/*
 * Union.cpp
 *
 *  Created on: 03-Feb-2020
 *      Author: sachin kurude
 */
//Addition, Subtraction, Multiplication, using Union and nested Union
#include<iostream>
using namespace std;
union Addition
{
	int a;
	int b;
	int ans;	//Union
};

int main()
{
	Addition A;	// Union Object Creation inside function for Access Data member
	//Addition
	cout<<"Enter any two no:"<<endl;
	cin>>A.a>>A.b;
	A.ans=A.a+A.b;
	cout<<"Addition of "<<A.a<<" + "<<A.b<<" = "<<A.ans<<endl;
	return 0;
}

//wrong output....pending
