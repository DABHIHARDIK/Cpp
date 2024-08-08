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

0> Is-a relationship 
    - Banana is a fruit
    - Rectangle is a quadrilateral

    - Association 
        - Aggregation 
        - Composition
        - Inheritance 


0> Public Inheritance 
    - Is a relationship is always implemented as a public inheritance. 
    - But why ???
        - When to use private and protected inheritance?


*/

// #include <iostream>

// using namespace std;

// class Car{
//     private:
//         int gear; 
//     public:
//         Car(){
//             gear =0 ;
//         }
//         void incrementgear(){
//             if (gear<5){
//                 gear++;
//             }
//         }
//         void showgear(){
//             cout<< " Gear is "<<gear;
//         }

// };

// class sportclass: public Car{
//     public:

// };

// int main(){

// sportclass lambogini;

//     lambogini.incrementgear();
//     lambogini.showgear();
//     return 0; 

// }


// how to work private item in class inheritance 

#include<iostream>

using namespace std; 


class Array{

    private: 
        int arr[10];
    public : 
        void insert(int index , int value ){

            arr[index]=value;
        }
        int passvalue(int index){
            return arr[index];
        }
};

class Stack: private Array{
    int index ;
     
    public :
    Stack(){
        index = 0 ; 
    }
        void push(int data){
            insert(index,data);
            index++;
        }

        void pop(){
            index--;
            cout<<"item is "<<passvalue(index);
        }

} ;


int main(){

Stack datacollection;

datacollection.push(10);
datacollection.push(15);
datacollection.pop();
datacollection.push(14);
datacollection.pop();
    return 0 ;
}