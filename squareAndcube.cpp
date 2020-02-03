/*
 * squareAndcube.cpp
 *
 *  Created on: 03-Feb-2020
 *      Author: sachin kurude
 */
//Accept number and calculate square if no is less 10 else calculate cube
#include<iostream>
using namespace std;
int main()
{
int n,ans;
cout<<"Enter any no:"<<endl;
cin>>n;
if(n<10)
{
	ans=n*n;
	cout<<"Square is = "<<ans<<endl;
}
else{
	ans=n*n*n;
	cout<<"Cube is = "<<ans<<endl;

}
return 0;
}
