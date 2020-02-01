/*
 * showMsgInOppsConstructor.cpp
 *
 *  Created on: 31-Jan-2020
 *      Author: sachin kurude
 */
//Default Constructor.....
#include<iostream>
using namespace std;
class ShowMsg
{
public:
	int a,b;
	ShowMsg(){
		a=10;
		b=20;
		cout<<"Default Constructor"<<endl;
		cout<<a<<" and "<<b<<endl;

	}
};
int main(){

	ShowMsg S;
	return 0;
}
