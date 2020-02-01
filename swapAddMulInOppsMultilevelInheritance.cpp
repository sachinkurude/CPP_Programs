/*
 * swapAddMulInOppsMultilevelInheritance.cpp
 *
 *  Created on: 31-Jan-2020
 *      Author: sachin kurude
 */
//Accept to number and perforam swapping two variable, Addition, Multiplication multilevel Inheritance....

#include<iostream>
using namespace std;
class Accept
{
public:
	int a,b,ans;
};

class Fun:public Accept
{
public:
	void swap();
	void add();
	void mul();
};

class CalShow:public Fun
{
public:
	void add(){
		cout<<"Accept Two Number For Addition:"<<endl;
		cin>>a>>b;
		ans=a+b;
		cout<<a<<" + "<<b<<" = "<<ans<<endl;
	}

	void mul(){
			cout<<"Accept Two Number For Multiplication:"<<endl;
			cin>>a>>b;
			ans=a*b;
			cout<<a<<" * "<<b<<" = "<<ans<<endl;
		}

	void swap(){
			cout<<"Accept Two Number For Swapping:"<<endl;
			cin>>a>>b;
			cout<<"Before Swapping: A= "<<a<<" B= "<<b<<endl;
			a=a+b;
			b=a-b;
			a=a-b;
			cout<<"After Swapping: A= "<<a<<" B= "<<b<<endl;

	}
};

int main()
{
	CalShow C;
	C.add();
	C.mul();
	C.swap();
	return 0;
}
