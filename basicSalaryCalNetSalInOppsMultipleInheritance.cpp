/*
 * basicSalaryCalNetSalInOppsMultipleInheritance.cpp
 *
 *  Created on: 31-Jan-2020
 *      Author: sachin kurude
 */
#include<iostream>
using namespace std;
class EmpAccept
{
public:
	float bSal;
	void accept()
	{
		cout<<"Accept Basic Salary:"<<endl;
		cin>>bSal;
	}

};
class EmpCal
{
	public:
	float bonus,netSal;

};
class EmpResult:public EmpCal,public EmpAccept
{
public:
	void cal()
	{
		bonus=bSal*0.15;
		netSal=bSal+bonus;
	}
	void result()
	{
		cout<<"Employee Basic Salary = "<<bSal<<endl;
		cout<<"Employee Bonus = "<<bonus<<endl;
		cout<<"Employee Net Salary = "<<netSal<<endl;
	}
};
int main()
{
	EmpResult E;
	E.accept();
	E.cal();
	E.result();
	return 0;

}
