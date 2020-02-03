/*
 * inOppsThis.cpp
 *
 *  Created on: 01-Feb-2020
 *      Author: sachin kurude
 */
#include <iostream>
using namespace std;
class Employee {
   public:
       int id; //data member (also instance variable)
       string name; //data member(also instance variable)
       float salary;
       Employee(int id,string name,float salary)
        {
             this->id = id;
            this->name = name;
            this->salary = salary;
        }
       void display()
        {
            cout<<id<<"  "<<name<<"  "<<salary<<endl;
        }
};
int main(void) {
    Employee E1 =Employee(101, "xyz", 58462); 	//creating an object of Employee
    Employee E2=Employee(102, "abc", 78451);	 //creating an object of Employee
    E1.display();
    E2.display();
    return 0;
}
