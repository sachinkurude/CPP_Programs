/*
 * addSumMulDivInOpps.cpp
 *
 *  Created on: 29-Jan-2020
 *      Author: sachin kurude
 */
//Accept two variable and calculate Addition,Subtraction,Division,Multiplication In Opps
#include<iostream>
using namespace std;
class Calculation{
public:
	int a,b,ans;
	//Accept variable value from user
	void accept(){
		cout<<"Enter any two integer:"<<endl;
		cin>>a>>b;
	}
	//Addition of two variable
	void sum(){
		ans=a+b;
		cout<<a<<" + "<<b<<" = "<<ans<<endl;
	}
	//subtraction of two variable
	void sub(){
			ans=a-b;
			cout<<a<<" - "<<b<<" = "<<ans<<endl;
		}
	//Division of two variable
	void div(){
			ans=a/b;
			cout<<a<<" / "<<b<<" = "<<ans<<endl;
		}
	//Multiplication of two variable
	void mul(){
			ans=a*b;
			cout<<a<<" * "<<b<<" = "<<ans<<endl;
		}
};

int main(){

	Calculation c; //Object creation of Calculation Class "class_name Obj;"
	c.accept();
	c.sum();
	c.sub();
	c.div();
	c.mul();
	return 0;
}
