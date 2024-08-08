/* 
0> Destructor 
    - Destructor is an instance member function of a class 
    - The name of the destructor is same as the name of a class but preceded by tilde(~) symbol
    - Destructors can never be static 
    - Destructor has no return type 
    - Destructor takes no argument ( No overloading is possible )
    - It is invoked implicitly when object is going to destroy 

0> why destructor ? 
    - It should be defined to release resoureces allocated to an object 
*/

#include<iostream>

using namespace std ; 

class complex{

    private:
        int a , b ; 
    public: 
        complex(){
            cout<<"enter a value";
            cin>>a>>b;
        }
        ~complex(){ // destructor 
            cout<< " completed object";
        }
};

void fun(){

    complex c1; 

}

int main(){
    fun();
    return 0 ;
}