/* 
0> Constructure 
    - Constructor is a member function of a class 
    - The name of the constructor is name as the name of the clas 
    - It has no return type , so can't use return keyword 
    - It must be an instance member function , that is , it can never be static 


0> How to call constructor ??????
    - Constructor is implicitly invoked when an object is created . 
    - Constructor is used to solve problem of initialization 

0> what is problem of initialization ??
    - why it is called constructor ?
    - what is problem of initialization ?
    - How Constructor resolves this issue ?

*/

#include<iostream>

using namespace std; 

class complex{

    private : 
        int a , b ; 
    public: 
        complex(){  //Constructor 
            cout<< " start constructor";
        }
};

int main(){


complex c1;

return 0 ; 
}