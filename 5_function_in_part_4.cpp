/* 
0> Polymorphism
    - Types of polymorphism 
        - Function overloading --> compaile time polymorphism
        - Operator overloading --> compile time polymorphism 
        - vartual function  --> Run time polymorphism
*/

// Function overloading 

#include<iostream>
using namespace std ; 

int area(int  ,int );
float area ( int );


int main(){

cout<<"area 1st \n"<<area(5);
cout<<"area 2nd"<<area(12,21);

    return 0 ; 
}

int area (int a , int b ){

    return(3.14*a*b);
}
float area ( int a){
    return(a*a);
}
/*
0> How Function overloading is resolved??
    - First , C++ tries to find an exact match. this is the case 
    where the actual argument exactly matches the parameter types of one 
    of the overladed function 
    - if no exact match is found , c++ tries to find a match throught promotion 
        - char , unsigned char adn shoert is promoted to an int
        - float is promoted ot double 
    - if no promotion is found , c++ tries to find a match through standard conversion 
*/