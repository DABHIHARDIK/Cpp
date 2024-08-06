/*
0> Method(Function) overriding
    - Method overloading 
    - Method overriding
    - Method hiding
*/

#include<iostream>

using namespace std;

class A{

    public:
        void f1(){

        }
        void f2(){

        }
};

class B:public A {
    public:
        void f1(){ // Method overriding 

        }
        void f2(int x){//Method hiding 

        }
};

int main(){

B obj ; 
obj.f1();//calling from B 
// obj.f2();//error
obj.f2(4) ;
 
    return 0 ; 
}