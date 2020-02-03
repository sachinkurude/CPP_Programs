/*
 * checkWhetherNobetn10or20.cpp
 *
 *  Created on: 03-Feb-2020
 *      Author: sachin kurude
 */
#include<iostream>
using namespace std;
int main()
{
int n;
cout<<"Enter any no:"<<endl;
cin>>n;
if(n>10&&n<20)
{
	cout<<n<<" is between 10 and 20"<<endl;
}
else
{
	cout<<n<<" is not between 10 and 20"<<endl;
}
return 0;

}
