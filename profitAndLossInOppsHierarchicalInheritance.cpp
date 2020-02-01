/*
 * profitAndLossInOppsHierarchicalInheritance.cpp
 *
 *  Created on: 31-Jan-2020
 *      Author: sachin kurude
 */
//Accept Cost and Selling Price of Product and find Profit and Loss using Hierarchical Inheritance
#include<iostream>
using namespace std;
class Product
{
public:	//Data Encapsulation Hiding the data member and member functions
	int cp,sp,ans;
};

class Cost:public Product
{
public:
	void costPrice()
	{
		cout<<"Enter Cost Price Of Product:"<<endl;
		cin>>cp;
	}

};

class Sell:public Product
{
public:
	void sellPrice()
		{
			cout<<"Enter Selling Price Of Product:"<<endl;
			cin>>sp;
		}

};

class Result:public Product
{
public:
	void show()
	{
		if(sp>cp)
		{
			ans=sp-cp;
			cout<<"Profit ="<<ans<<endl;
		}
		else if(sp<cp)
		{
			ans=cp-sp;
			cout<<"Loss ="<<ans<<endl;
		}
		else
		{
			cout<<"Neither Profit and Loss";
		}
	}
};

int main()
{
	Cost C;		//
	Sell S;		//Objects **wans
	Result R;	//

	C.costPrice(); 	//Function Call
	S.sellPrice();
	R.show();

	return 0;
}
