/*
 * nestedFunction.cpp
 *
 *  Created on: 03-Feb-2020
 *      Author: sachin kurude
 */
#include<iostream>
using namespace std;
class Demo
{
public:
	void display()
	{
		show();
		cout<<"Welcome Display function"<<endl;
	}
	void show()
	{
		cout<<"Welcome show function"<<endl;

	}
};

int main()
{
	Demo D;
	D.display();
	return 0;
}
