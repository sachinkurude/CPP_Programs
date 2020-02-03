/*
 * basicSalaryCalNetSal.cpp
 *
 *  Created on: 29-Jan-2020
 *      Author: sachin kurude
 */
#include<iostream>
using namespace std;
int main()
{
	//To Calculate basic salary of employee
	float netSal,bonus,basicSal;
	cout<<"Enter Basic Salary Of Employee:"<<endl;
	cin>>basicSal;

	bonus=basicSal*0.20;
	netSal=bonus+basicSal;

	cout<<"Basic Salary: "<<basicSal<<" Rs"<<endl;
	cout<<"Bonus on Basic Salary: "<<bonus<<" Rs"<<endl;
	cout<<"Net Salary: "<<netSal<<" Rs"<<endl;
	return 0;
}
