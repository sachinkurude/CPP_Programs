/*
 * inlineFunction.cpp
 *
 *  Created on: 03-Feb-2020
 *      Author: sachin kurude
 */
//Inline function Class and Object
#include<iostream>
using namespace std;
class Inline
{
public:
inline void demo()
{
int a=10,b=20;
cout<<a<<" "<<b;
}
};

int main()
{
Inline I;
I.demo();
return 0;
}
