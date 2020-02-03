/*
 * demoInOppsFunOverriding.cpp
 *
 *  Created on: 01-Feb-2020
 *      Author: sachin kurude
 */
//Function Overriding......
#include <iostream>
using namespace std;
class BaseClass {
public:
   void disp(){
      cout<<"Function of Parent Class"<<endl;
   }
};
class DerivedClass: public BaseClass{
public:
   void disp() {
      cout<<"Function of Child Class"<<endl;
   }
};
int main() {

	DerivedClass obj1;// = DerivedClass();
	obj1.disp();
	BaseClass obj2;// = DerivedClass();
	obj2.disp();
	return 0;
}
