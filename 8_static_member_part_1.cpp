/*
0> Static local variable
0> static member variable
0> static member fucntion

0> static local variable
    - concept as it is taken from c
    - They are by default initialized to zero
    - Their lifetime is throughtout the program


0> static member variable
    - Declared inside the class body
    - Also known as class member variable
    - They must be defined outside the class
    - static member variable does not belong to any object , but to the whole class
    - there will be only copy of static member variable for the whole class
    - any object can use the same copy of class variable
    - they can also be used with class name

*/

#include <iostream>

using namespace std;

void fun()
{
    static int x; // static local variable
    cout<<x;
}

class Account{
    private: 
        int balance; // Instance member variable  
        static float roi ; // Static member variable / class variable
    public:
        void setBalance( int b ){
            balance = b ;
        }

};

// float Account:: roi = 3.5f;

int main(){

Account a1;
a1.setBalance(50);

    return 0 ; 
}