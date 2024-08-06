/* 
0> Friend Function 
    - Friend function is not a member of the class to which it is friend 
    - Friend function cannot access members of the class directly 
    - It has no caller object 
    - It should not be defined with membership label
*/

#include<iostream>

using namespace std; 

class complex{

    private:
        int a, b;
    public:
        void set_data(int x ,int y){
            a = x ; b = y ; 
        }
        void show_data(){
            cout<<"\n a is "<<a<<" b is "<<b;

        }
        friend void fun(complex);
};

void fun(complex c){

    cout<<" sum is "<<c.a+c.b;
}

int main(){

complex c1, c2, c3; 
c1.set_data(3,4);
c1.show_data();
fun(c1);
    return 0 ; 
}