/* 
o> what is Function ? 
    - Function is block of code performing a unit task 
    - Function has a name , return types and arguments 
    - Function is a way to achieve modularizion 
    - Function are predefined and user-defiend 
    - Predefiend function are declared in header files adn defined in library files. 

O> Defination , Declaration and call 
    #include<iostream> --> Declaration of cout and cin 

    void fun(): --> gloable declaration 

    void main(){
    void fun(); --> Function Declaration (local Declaration )
    cout<<" you are in main ";
    fun(); --> Function call 

    }

    void fun(){
    cout<<"you are in fun"; --> Function Definition 
    }

    o> Declaration 
        - Function declaration is aslo known as function prototype 
        - Function need to be declared before use( just like variable)
        - Funcation can be declared locally or globally 
        - Return type function name ( argumentlist );
        - Function definition is a  block of code 

    o> Ways to define a function ? 
        - take mothing , return nothing 
        - takes something , return nothing 
        - takes nothing , return something
        - takes something , return something 


*/

#include<iostream>
using namespace std;

int sumpointer(int *,int *);
int sumreference(int & , int &);
int main(){
 
 int sum(int , int );

int a = 5 , b =10; 

int s = sum(a,b); // a nd b are Actual arguments 

cout<<"sum of variable "<<s<<endl; 

int sp = sumpointer(&a,&b);//call by address

int sf = sumreference(a , b);// call by reference 

cout<<"sum of variable "<<sf; 
    return 0 ; 

}

// call by value 
int sum( int x , int y ){// x and y are formal arguments 

    return (x+y);
}


// call by address 
int sumpointer ( int *x , int * y ){ // call by pointer 

    return(*x + *y);
}

int sumreference(int &x, int &y){// call by reference 
 x++;
 y++;
    return (x+y);
}