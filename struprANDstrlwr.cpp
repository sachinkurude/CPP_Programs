/*
 * struprANDstrlwr.cpp
 *
 *  Created on: 04-Feb-2020
 *      Author: sachin kurude
 */
//String Upper and lower
#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	char name[20];
	cout<<"Enter any name:"<<endl;
	cin>>name;
	strupr(name);
	cout<<"Upper Case Name:  "<<name<<endl;
	strlwr(name);
	cout<<"Upper Case Name:  "<<name<<endl;
	return 0;
}
