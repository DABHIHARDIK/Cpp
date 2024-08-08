
// Friend function class 

#include<iostream>

using namespace std; 

class A{
    public: 
    void fun(){
        cout<<"class A calling ";
    }
    void fun1(){
        cout<<"\nclass A calling fun 1  ";
    }

};

class B {
    // First method to call one by one function 
    B(){
    
    }

    friend void A::fun1();
    friend void A::fun();

    // second method is access all method(function)
    friend class A; // friend class method 
};