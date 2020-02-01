/*
 * areaOfCirclePerimeterOfCircleInOppsHybridInheritance.cpp
 *
 *  Created on: 31-Jan-2020
 *      Author: sachin kurude
 */
//Area of Circle and Perimeter of Circle using Hybrid Inheritance
#include<iostream>
using namespace std;
class Accept
{
public:
	int r;
	float pi=3.14,ans;
};

class AreaOfCircle:public Accept
{
public:
	void aCircle()
	{
		cout<<"Accept Radius[Area Of Circle]"<<endl;
		cin>>r;
	}
};
class PerimeterOfCircle
{
public:
	void pCircle()
		{
		int r;
		cout<<"Accept Radius[circumference]"<<endl;
		cin>>r;
		}

};
class Result:public AreaOfCircle,public PerimeterOfCircle
{
public:
	void aCircleResult()
	{
		ans=pi*r*r;
		cout<<"Area Of Circle: "<<ans<<endl<<endl;
	}

	void pCircleResult()
		{
			ans=2*pi*r;
			cout<<"Perimeter Of Circle: "<<ans<<endl<<endl;
		}

};

int main(){
	Result R;
	R.aCircle();
	R.aCircleResult();
	R.pCircle();
	R.pCircleResult();
	return 0;

}
