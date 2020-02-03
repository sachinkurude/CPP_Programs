/*
 * displayTableForUsingInOppsScope.cpp
 *
 *  Created on: 03-Feb-2020
 *      Author: sachin kurude
 */
//accept any number display table.
#include<iostream>
using namespace std;
class Table
{
public:
	void tableof();

};
void Table::tableof()
{
	int i,n,ans;
				cout<<"Enter any no:"<<endl;
				cin>>n;
				for(i=1;i<=10;i++)
				{
					ans=i*n;
					cout<<ans<<endl;
				}
}
int main()
{
Table T;
T.tableof();
	return 0;

}
