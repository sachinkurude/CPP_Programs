/*
 * strrev.cpp
 *
 *  Created on: 04-Feb-2020
 *      Author: sachin kurude
 */
//String Reverse
#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	char name[20];
	cout<<"Enter any name:"<<endl;
	cin>>name;
	strrev(name);
	cout<<"Reverse name:  "<<name<<endl;
	return 0;
}
