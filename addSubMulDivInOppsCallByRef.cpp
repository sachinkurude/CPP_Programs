/*
 * addSubMulDivInOppsCallByRef.cpp
 *
 *  Created on: 31-Jan-2020
 *      Author: sachin kurude
 */
//Accept two variable and calculate Addition,Subtraction,Division,Multiplication In Opps.
#include<iostream>
using namespace std;
class Calculation{
public:
	int a,b,ans;
	//Addition of two variable
	void sum(int *x,int *y){
		ans=*x+*y;
		cout<<*x<<" + "<<*y<<" = "<<ans<<endl;
	}
	//subtraction of two variable
	void sub(int *x, int *y){
			a=*x;
			b=*y;
			ans=a-b;
			cout<<a<<" - "<<b<<" = "<<ans<<endl;
		}
	//Division of two variable
	void div(int *x,int *y){
		float divans;
			a=*x;
			b=*y;
			divans=a/b;
			cout<<a<<" / "<<b<<" = "<<divans<<endl;
		}
	//Multiplication of two variable
	void mul(int *x,int *y){
		//a=*x;
		//b=*y;
		ans=*x**y;
		//ans=a*b;
		cout<<*x<<" * "<<*y<<" = "<<ans<<endl;
		//cout<<a<<" * "<<b<<" = "<<ans<<endl;
		}
};

int main(){
	int num1,num2;
	Calculation c; //Object creation of Calculation Class "class_name Obj;"
	cout<<"Accept Two Number:"<<endl;
	cin>>num1>>num2;
	c.sum(&num1,&num2);
	c.sub(&num1,&num2);
	c.div(&num1,&num2);
	c.mul(&num1,&num2);
	return 0;
}
