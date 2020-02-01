/*
 * sqrInOppsSingleInheritance.cpp
 *
 *  Created on: 31-Jan-2020
 *      Author: sachin kurude
 */
#include<iostream>
using namespace std;
class SquareAccept
{
public:
	int sq,n;
	void accept()
	{
		cout<<"Enter any Number:"<<endl;
		cin>>n;

	}
};
class SquareCalResult:public SquareAccept
{
public:
	void cal()
	{
		sq=n*n;
	}
	void result()
	{
		cout<<"Square of "<<n<<" = "<<sq<<endl;
	}
};
int main()
{
	SquareCalResult S;
	S.accept();
	S.cal();
	S.result();
	return 0;
}
