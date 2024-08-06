/*
0> Pure virtual Function 
    -A do nothing function is pure virtual function

0> Why abstract class?
    - student and faculty 
*/

#include<iostream>

using namespace std;

class person{
    public:
   virtual void fun()=0; // pure virtual function we can not create object is defination is not there
   void f1(){
    cout<<"f1 function";
   }
};

class student:public person{
    public:

};