/*
 * profitAndLoss.cpp
 *
 *  Created on: 03-Feb-2020
 *      Author: sachin kurude
 */
//Accept cost price and selling price and find profit and loss;

#include<iostream>
using namespace std;
int main()
{
int cp,sp,ans;
cout<<"Enter cost price and Selling pirce: "<<endl;
cin>>cp>>sp;
if(sp>=cp)
{
ans=sp-cp;
cout<<"Profit = "<<ans;
}
else
{
	ans=cp-sp;
	cout<<"Loss"<<ans;
}
return 0;
}
