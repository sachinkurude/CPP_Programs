/*
 * nameSpaceUsingKeyword.cpp
 *
 *  Created on: 01-Feb-2020
 *      Author: sachin kurude
 */
//namespace using keyword.....
#include <iostream>
using namespace std;
namespace First{
   void sayHello(){
      cout << "Hello First Namespace" << endl;
   }
}
namespace Second{
   void sayHello(){
      cout << "Hello Second Namespace" << endl;
   }
}
using namespace First;  //namespace First..
int main () {
   sayHello();
   return 0;
}
