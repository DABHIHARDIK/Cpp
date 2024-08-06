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
        complex(int x, int y ){  //parameterized Constructor 
            cout<< " start constructor";
            a = x ; 
            b = y; 
        }
        complex( int k ){
            a = k ; 
        }

        complex(){// default constructor 

        }

        complex ( complex &c){ // Copy constructor 
            a = c.a;
            b = c.b;
        }

        // if we are writting more then one constructor that called construcotor overloading 
    void display(){
        cout<< " a is "<<a<<" b is "<<b;
    }
};

int main(){


complex c1(10,15);

complex c2(5),c3,c4(10,12);
// complex c5=4;
c1.display();

return 0 ; 
}