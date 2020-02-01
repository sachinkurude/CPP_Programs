/*
 * addMulSubInOppsHierarchicalInheritance.cpp
 *
 *  Created on: 31-Jan-2020
 *      Author: sachin kurude
 */
#include<iostream>
using namespace std;
class Accept
{
public:		//Encapsulation public,private,protect data hiding.....
	int a,b,ans;
};
class Addition:public Accept
{
public:
	void add(){
		cout<<"Accept Two Number for Addition:"<<endl;
		cin>>a>>b;
		ans=a+b;
		cout<<a<<" + "<<b<<" = "<<ans<<endl;
	}
};
class Subtraction:public Accept
{
public:
	void sub(){
		cout<<"Accept Two Number for Subtraction:"<<endl;
		cin>>a>>b;
		ans=a-b;
		cout<<a<<" - "<<b<<" = "<<ans<<endl;
	}
};
class Multiplication:public Accept
{
public:
	void mul(){
		cout<<"Accept Two Number for Multiplication:"<<endl;
		cin>>a>>b;
		ans=a*b;
		cout<<a<<" * "<<b<<" = "<<ans<<endl;
	}
};

int main(){
	Addition A;
	Subtraction S;
	Multiplication M;

	A.add();
	S.sub();
	M.mul();
	return 0;
}
