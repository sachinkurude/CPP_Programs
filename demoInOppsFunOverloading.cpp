/*
 * demoInOppsFunOverloading.cpp
 *
 *  Created on: 01-Feb-2020
 *      Author: sachin kurude
 */
//Function Overloading.....example
#include <iostream>
using namespace std;
class DemoClass {
public:
    int demoFunction(int i) {
        return i;
    }
    double demoFunction(double d) {
        return d;
    }
};
int main(void) {
    DemoClass obj;
    cout<<obj.demoFunction(100)<<endl;
    cout<<obj.demoFunction(5005.516);
   return 0;
}
