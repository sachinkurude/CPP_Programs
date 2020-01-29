/*
 * calculateAddMulDivSubOfTwoNumbers.cpp
 *
 *  Created on: 29-Jan-2020
 *      Author: sachin kurude
 */
#include<iostream>
using namespace std;
int main(){
	int firstNo,secondNo,ans;
	cout<<"Accept Any Two Integers Number and Calculate Addition,subtraction,Multiplication,Division :\n";
	//Accept Two Integers
	cin>>firstNo>>secondNo;
	//Addition
	ans=firstNo+secondNo;
	cout<<firstNo<<" + "<<secondNo<<" = "<<ans<<endl;
	//subtraction
	ans=firstNo-secondNo;
		cout<<firstNo<<" - "<<secondNo<<" = "<<ans<<endl;
		//Multiplication
		ans=firstNo*secondNo;
			cout<<firstNo<<" * "<<secondNo<<" = "<<ans<<endl;
			//Division
			ans=firstNo/secondNo;
				cout<<firstNo<<" / "<<secondNo<<" = "<<ans<<endl;
				return 0;
}
