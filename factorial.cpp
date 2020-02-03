/*
 * factorial.cpp
 *
 *  Created on: 03-Feb-2020
 *      Author: sachin kurude
 */
//Factorial of Number
#include <iostream>
using namespace std;
int main()
{
   int i,fact=1,number;
  cout<<"Enter any Number: ";
 cin>>number;
  for(i=1;i<=number;i++){
      fact=fact*i;
  }
  cout<<"Factorial of " <<number<<" is: "<<fact<<endl;
  return 0;
}
