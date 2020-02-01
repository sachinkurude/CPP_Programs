/*
 * addSubMulDivInOppsCallByValue.cpp
 *
 *  Created on: 29-Jan-2020
 *      Author: sachin kurude
 */
//Accept two variable and calculate Addition,Subtraction,Division,Multiplication In Opps.
#include<iostream>
using namespace std;
class Calculation{
public:
	int a,b,ans;
	//Addition of two variable
	void sum(int x,int y){
		a=x;
		b=y;
		ans=a+b;
		cout<<a<<" + "<<b<<" = "<<ans<<endl;
	}
	//subtraction of two variable
	void sub(int x, int y){
			ans=x-y;
			cout<<x<<" - "<<y<<" = "<<ans<<endl;
		}
	//Division of two variable
	void div(int x,int y){
			ans=x/y;
			cout<<x<<" / "<<y<<" = "<<ans<<endl;
		}
	//Multiplication of two variable
	void mul(int x,int y){
			ans=x*y;
			cout<<x<<" * "<<y<<" = "<<ans<<endl;
		}
};

int main(){
	int num1,num2;
	Calculation c; //Object creation of Calculation Class "class_name Obj;"
	cout<<"Accept Two Number:"<<endl;
	cin>>num1>>num2;
	c.sum(num1,num2);
	c.sub(10,6);
	c.div(num1,8);
	c.mul(7,num2);
	return 0;
}
