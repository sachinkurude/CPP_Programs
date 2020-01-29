/*
 * areaOfCircle.cpp
 *
 *  Created on: 29-Jan-2020
 *      Author: sachin kurude
 */
#include<iostream>
using namespace std;
int main()
{
	//Calculate Area of Circle
	int radius;
	float pi=3.14,area;

	cout<<"Enter radius and calulate area of circle:\n";
	cin>>radius;
	area=pi*radius*radius;
	cout<<"Area Of circle: "<<area<<endl;
	std::cout.precision (4);//use for point value size
	cout<<std::showpoint<<"Area Of circle: "<<area<<endl;
	return 0;
}
