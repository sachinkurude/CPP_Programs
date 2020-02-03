/*
 * strcmpiPalindrome.cpp
 *
 *  Created on: 04-Feb-2020
 *      Author: sachin kurude
 */
#include<iostream>
#include<cstring>
using namespace std;
int main()
{
char name1[20],name2[20];
int i;
cout<<"Enter any name:"<<endl;
cin>>name1;
strcpy(name2,name1);
strrev(name2);
i=strcmpi(name1,name2);
if(i==0)
	{
		cout<<"Name is palindrome :"<<endl;
	}
	else
	{
		cout<<"Name is not palindrome :"<<endl;
	}
return 0;
}
