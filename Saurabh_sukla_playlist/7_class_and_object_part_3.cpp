/*
0> Technical jargons 

    - class is a description of an object 
    - object is an instance of a class 

    0> Instances member variable 
        - Attributes, data members, fields, properties
    
    0> Instance member functions
        - Methods, Procedures, actions, operations, services




*/
#include<iostream>
using namespace std ; 

class complex{

    private:
    int a , b; // you cannot say that is class variable 
        // that is the class instance variable 

    public: 
    void set_data(int x , int y ){//instance variable function that is not class function 
        a=x;b=y;
    }
    void show_data(){
        cout<<"a is "<<a<<" b is "<<b;
    }

    complex add(complex c){
        complex temp ; 
        temp.a = a + c.a;
        temp.b = b + c.b;
        return (temp);
    }
};