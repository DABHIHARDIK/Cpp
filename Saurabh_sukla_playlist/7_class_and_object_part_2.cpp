/*
0> class and structure 
    - The only difference between structure adn class is that , 
        - the members of structure are by default public and 
        - the member of class are by default private
    
*/

#include<iostream>
using namespace std ; 



/* In class if you are written private or public then default considering is private all member*/
class complex{

    private:
    int a , b;

    public: 
    void set_data(int x , int y ){
        a=x;b=y;
    }
    void show_data(){
        cout<<"a is "<<a<<" b is "<<b;
    }

    complex add(complex c){
        complex temp ; 
        temp.a = a + c.a;
        temp.b = b + c.b;
        return (temp);
    }
};


int main(){

complex c1 ,c2,c3; 
c1.set_data(3,4);
c2.set_data(3,4);
c3 = c2.add(c1);
c3.show_data();
    return 0; 
}