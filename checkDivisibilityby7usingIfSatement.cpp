/*
 * checkDivisibilityby7usingIfSatement.cpp
 *
 *  Created on: 03-Feb-2020
 *      Author: sachin kurude
 */
//Accept any number and check divisible by 7
#include<iostream>
using namespace std;
int main()
{
int n;
cout<<"Enter any no:"<<endl;
cin>>n;

if(n%7==0)
{
cout<<n<<" Is Divisible by 7";
}

if(n%7!=0)
{
cout<<n<<" Is Not Divisible by 7";
}

return 0;
}
