/*
 * displayValueInOppsFunOverloading.cpp
 *
 *  Created on: 01-Feb-2020
 *      Author: sachin kurude
 */
//Demo display function overloading d
#include<iostream>
using namespace std;
class Demo
{
public:
	void display(int n){	//In function overloading different data type in display function....
		cout<<n<<endl;
	}

	void display(int a,int b){
			cout<<a<<" & "<<b<<endl;
		}
	void display(int a,int b,float c){
		cout<<a<<" 	"<<b<<"	 "<<c<<endl;
		}
	void display(int a,float c,int b){
			cout<<a<<" 	"<<c<<"	 "<<b<<endl;
			}
	void display(int a,float c,string b){
				cout<<a<<" 	"<<c<<"	 "<<b<<endl;
				}
};

int main()
{
Demo D;
D.display(10);
D.display(11,21);
D.display(41,25,33.50);
D.display(36,22.10,88);
D.display(95,52,"sachin");
return 0;
}
