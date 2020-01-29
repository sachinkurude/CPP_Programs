/*
 * perimeterOfCircle.cpp
 *
 *  Created on: 29-Jan-2020
 *      Author: sachin kurude
 */
#include<iostream>
using namespace std;
int main()
{
	//Calculate Perimeter of Circle
	int radius;
	float pi=3.14,p_area;

	cout<<"Enter radius and calulate area of circle:\n";
	cin>>radius;
	p_area=2*pi*radius;
	cout<<"Area Of circle: "<<p_area<<endl;
	std::cout.precision (4);//use for point value size
	cout<<std::showpoint<<"Area Of circle: "<<p_area<<endl;
	return 0;
}
