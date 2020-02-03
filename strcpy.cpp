/*
 * strcpy.cpp
 *
 *  Created on: 04-Feb-2020
 *      Author: sachin kurude
 */
//String copy
#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	char name1[20],name2[20];
	cout<<"Enter any name:"<<endl;
	cin>>name1;
	strcpy(name2,name1);
	cout<<"copy name: "<<name2<<endl;
	return 0;
}
