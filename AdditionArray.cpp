/*
 * AdditionArray.cpp
 *
 *  Created on: 04-Feb-2020
 *      Author: sachin kurude
 */
//Accept two variable values 5 time and calculate additions using array
#include<iostream>
using namespace std;
int main()
{
	int i,a[5],b[5],ans[5];
	for(i=0;i<5;i++)
	{
		cout<<"Enter two numbers"<<endl;
		cin>>a[i]>>b[i];
		ans[i]=a[i]+b[i];
	}

	for(i=0;i<5;i++)
		{
			cout<<a[i]<<" + "<<b[i]<<" = "<<ans[i]<<endl;
		}
	return 0;
}
