/*
 * checkDivisibilityby5usingIfElseSatement.cpp
 *
 *  Created on: 03-Feb-2020
 *      Author: sachin kurude
 */
////Accept any number and check divisible by 5
#include<iostream>
using namespace std;
int main()
{
int n;
cout<<"Enter any no:"<<endl;
cin>>n;

if(n%5==0)
{
cout<<n<<" Is Divisible by 5";
}
else
{
cout<<n<<" Is Not Divisible by 5";
}

return 0;
}
