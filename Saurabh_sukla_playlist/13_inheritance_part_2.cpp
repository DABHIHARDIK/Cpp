/*
0> Understand the need of inheritance
    - class is used to describe properties and behaviour of an object
    - property names and values
    - Behaviour means actions

    - Lets as assume that we want to represetn a car .

0> Inheritance 
    - It is a process of inheriting properties and behaviours of existing class into a new class. 
    -Exixting class = old class = parent class = base class
    - New class = child class = Derived class
    
0> Types of inheritance 
    - Single inheritance 
    - Multilevel inheritance 
    - Multiple inheritance 
    - Hierarchical inheritance 
    - hybrid inheritance 

0> Visibility Modes 
    - Private 
    - Protected
    - Public


0> Types of users of a class 
    - User 1 will create object of your class 
    - User 2 will derived class from your class 

*/

#include <iostream>

using namespace std;

class A
{
    private:
        int a ;
    protected: 
        void setValue(int k ){ // pprotected function used only drived class 
            a = k ; 
        }
    public: 
        void show_data(){
            cout<<" value is "<<a;
        }
};

class B : public A{// class B drived form class A ( Public is visibility mode)
    public:
        void Setdata(int x){
            setValue(x); // used class A protected function 
        }
};

int main()
{

B obj; 
obj.Setdata(5);
obj.show_data();// public function any can use 

    return 0;
}