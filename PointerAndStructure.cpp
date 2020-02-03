/*
 * PointerAndStructure.cpp
 *
 *  Created on: 03-Feb-2020
 *      Author: sachin kurude
 */
//Structure Pointer Addition....
#include<iostream>
using namespace std;
struct Add
{
	int a,b,ans;
};
int main()
{
	Add A,*P;
	P=&A;
	cout<<"Enter any two no:"<<endl;
	cin>>P->a>>P->b;
	P->ans=P->a+P->b;
	cout<<"Addtion ="<<P->ans;
	return 0;
}
