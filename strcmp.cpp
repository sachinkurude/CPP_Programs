/*
 * strcmp.cpp
 *
 *  Created on: 04-Feb-2020
 *      Author: sachin kurude
 */
//String compare
#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	char name1[20],name2[20];
	int i;
	cout<<"Enter any name:"<<endl;
	cin>>name1>>name2;
	i=strcmp(name2,name1);
	if(i==0)
	{
		cout<<"Both are equal:"<<endl;
	}
	else
	{
		cout<<"Both are not equal:"<<endl;
	}
	return 0;
}
