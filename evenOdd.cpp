/*
 * evenOdd.cpp
 *
 *  Created on: 03-Feb-2020
 *      Author: sachin kurude
 */
//Accept any number and check Even or Odd Number
#include<iostream>
using namespace std;
int main()
{
int n;
cout<<"Enter any no:"<<endl;
cin>>n;
if(n%2==0)
{
	cout<<n<<" Even Number"<<endl;
}
else
{
	cout<<n<<" Odd Number"<<endl;
}
return 0;
}
