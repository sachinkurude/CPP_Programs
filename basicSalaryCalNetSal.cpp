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
	int basicSal;
	float netSal,bonus;
	cout<<"Enter Basic Salary Of Employee:"<<endl;
	cin>>basicSal;

	bonus=basicSal*0.20;
	netSal=bonus+basicSal;

	cout<<"Basic Salary: "<<basicSal<<endl;
	cout<<"Bonus on Basic Salary: "<<bonus<<endl;
	cout<<"Net Salary: "<<netSal<<endl;
	return 0;
}
