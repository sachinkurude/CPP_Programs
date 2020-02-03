/*
 * Structure.cpp
 *
 *  Created on: 03-Feb-2020
 *      Author: sachin kurude
 */
//Addition, Subtraction, Multiplication, using structure and nested structure
#include<iostream>
using namespace std;
struct Addition
{
	int a,b,ans;	//Structure
};
struct Subtraction
{
	int a,b,ans;
}S;	//Structure Object Creation outside function for Access Data member

struct Multiplication
{
	int x,y;
	struct Result	//Nested Structure
	{
		int ans;
	}R;
}M;
int main()
{
	Addition A;	// Structure Object Creation inside function for Access Data member
	//Addition
	cout<<"Enter any two no:"<<endl;
	cin>>A.a>>A.b;
	A.ans=A.a+A.b;
	cout<<"Addition of "<<A.a<<" + "<<A.b<<" = "<<A.ans<<endl;
	//Subtraction
	cout<<"Enter any two no:"<<endl;
		cin>>S.a>>S.b;
		S.ans=S.a-S.b;
		cout<<"Subtraction of "<<S.a<<" - "<<S.b<<" = "<<S.ans<<endl;

		//Multiplication
			cout<<"Enter any two no:"<<endl;
			cin>>M.x>>M.y;
			M.R.ans=M.x*M.y;
			cout<<"Subtraction of "<<M.x<<" * "<<M.y<<" = "<<M.R.ans<<endl;
		return 0;
}
