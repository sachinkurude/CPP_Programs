/*
 * strlen.cpp
 *
 *  Created on: 04-Feb-2020
 *      Author: sachin kurude
 */
//String length..
#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	char name[20];
	int len;
	cout<<"Enter any name:"<<endl;
	cin>>name;
	len=strlen(name);
	cout<<"Length of "<<name<<" = "<<len<<endl;
	return 0;
}
