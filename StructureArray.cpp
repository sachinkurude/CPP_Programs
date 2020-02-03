/*
 * StructureArray.cpp
 *
 *  Created on: 03-Feb-2020
 *      Author: sachin kurude
 */
//Calculate Basic Salary of Employee using Structure Array
//Calculate 10 Employee salary
#include<iostream>
using namespace std;
struct Emp
{
	float bsal,bon,net;
};
int main()
{
	Emp E[10];
	int i;
for(i=0;i<10;i++){
	cout<<"Accept Employee Name and Basic Salary:"<<endl;
	cin>>E[i].bsal;
}

for(i=0;i<10;i++){
E[i].bon=E[i].bsal*0.20;
E[i].net=E[i].bsal+E[i].bon;
cout<<"Basic = "<<E[i].bsal<<endl<<"Bonus = "<<E[i].bon<<endl<<"Net salary = "<<E[i].net<<endl<<endl;
}
return 0;
}
