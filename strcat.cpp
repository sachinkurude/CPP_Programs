/*
 * strcat.cpp
 *
 *  Created on: 04-Feb-2020
 *      Author: sachin kurude
 */
//String Concatenate
//String copy
#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	char name1[20],name2[20];
	cout<<"Enter any name:"<<endl;
	cin>>name1>>name2;
	strcat(name1,name2);
	cout<<"copy name: "<<name1<<endl;
	return 0;
}
