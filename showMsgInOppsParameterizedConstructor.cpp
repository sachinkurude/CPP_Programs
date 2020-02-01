/*
 * showMsgInOppsParameterizedConstructor.cpp
 *
 *  Created on: 31-Jan-2020
 *      Author: sachin kurude
 */
//Default Constructor and parameterized  .....
#include<iostream>
using namespace std;
class ShowMsg
{
public:
	int a,b;
	ShowMsg()
	{
		a=10;
		b=20;
		cout<<"Default Constructor"<<endl;	//Default Constructor
		cout<<a<<" and "<<b<<endl;
	}

	ShowMsg(int x, int y)
	{
		cout<<"parameterized Constructor:"<<endl;	//Parameterized Constructor
		cout<<x<<" and "<<y<<endl;
	}
};
int main(){
	ShowMsg S1;
	ShowMsg S2(30,40);

	return 0;
}
