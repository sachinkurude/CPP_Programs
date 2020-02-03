/*
 * seasonMonth.cpp
 *
 *  Created on: 03-Feb-2020
 *      Author: sachin kurude
 */
//Accept month and dispaly Season of month...
#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"Enter anyn Month no[1-12]:"<<endl;
	cin>>n;
	if(n==2||n==3||n==4||n==5)
	{
		cout<<"It is Summer Season:"<<endl;
	}
	else if(n==6||n==7||n==8||n==9)
	{
		cout<<"It is Rainy Season:"<<endl;
	}
	else if(n==10||n==11||n==12||n==1)
	{
		cout<<"It is Winter Season:"<<endl;
	}
	else{
		cout<<"Invalid No:";
	}
	return 0;
}
