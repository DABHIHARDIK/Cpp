/*
0> class and structure 
    - The only difference between structure adn class is that , 
        - the members of structure are by default public and 
        - the member of class are by default private
    
*/

#include<iostream>
using namespace std ; 

struct complex{

    private:
    int a , b;

    public: 
    // void set_data(int x , int y ){
    //     a=x;b=y;
    // }

    void set_data(int x , int y ); // second way 
    void show_data(){
        cout<<"a is "<<a<<"b is "<<b;
    }
};


void complex:: set_data(int x , int y){ // direct access member variable and consider as a member class 
    a=x;b=y;
}

/* In class if you are written private or public then default considering is private all member*/
// class complex{

//     private:
//     int a , b;

//     public: 
//     void set_data(int x , int y ){
//         a=x;b=y;
//     }
//     void show_data(){
//         cout<<"a is "<<a<<"b is "<<b;
//     }
// };


int main(){

complex c1 ; 
c1.set_data(3,4);
c1.show_data();

    return 0; 
}