/* 
0> Default Constructor 
0> Parameterized constructor 
0> Constructor overloading --> if we are writting more then one constructor that called construcotor overloading 
*/

#include<iostream>

using namespace std; 

class complex{

    private : 
        int a , b ; 
    public: 
        complex(int x = 0 , int y = 0 ){  //parameterized Constructor 
            cout<< " start constructor";
            a = x ; 
            b = y; 
        }

        complex(){// default constructor 

        }

        // if we are writting more then one constructor that called construcotor overloading 
    void display(){
        cout<< " a is "<<a<<" b is "<<b;
    }
};

int main(){


complex c1(10,15);
c1.display();

return 0 ; 
}