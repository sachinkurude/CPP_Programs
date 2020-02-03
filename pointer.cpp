/*
 * pointer.cpp
 *
 *  Created on: 03-Feb-2020
 *      Author: sachin kurude
 */
//single pointer example
#include<iostream>
using namespace std;
int main()
{
	int a=10,*b;
	b=&a;
	cout<<&a<<endl;
	cout<<a<<endl;
	cout<<&b<<endl;
	cout<<b<<endl;
	//cout<<*a<<endl;
	cout<<*b<<endl;
	cout<<*(&a)<<endl;
	cout<<*(&b)<<endl;
	return 0;
}
