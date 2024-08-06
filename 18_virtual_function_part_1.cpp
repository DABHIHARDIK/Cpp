/*
0> Virtual Function 
    -Base class pointer 
        - Base clas pointer can pointer to the object of any of its descendant class 
        - But its converse is not true 
*/


#include<iostream> 
using namespace std ; 

class A{

    public:
       virtual void f1(){

        }
};

class B :public A{

    public: 
        void f1(){//function overriding

        }
};

int main(){

A *p,o1;

B o2;

p = &o2;
    return 0 ;
}
