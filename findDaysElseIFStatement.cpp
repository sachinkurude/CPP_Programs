/*
 * findDaysElseIFStatement.cpp
 *
 *  Created on: 03-Feb-2020
 *      Author: sachin kurude
 */

//Find day...
#include<iostream>
using namespace std;
int main()
{
	int n;
	if(n==1)
	{
		cout<<"Monday";
	}
	else if(n==2)
	{
		cout<<"Tuesday";
	}
	else if(n==3)
		{
			cout<<"Wednesday";
		}
	else if(n==4)
		{
			cout<<"Tuesday";
		}
	else if(n==5)
		{
			cout<<"Friday";
		}
	else if(n==6)
		{
			cout<<"Saturday";
		}
	else if(n==7)
		{
			cout<<"Sunday";
		}

	else
	{
		cout<<"Invalid number:";
	}
	return 0;

}
