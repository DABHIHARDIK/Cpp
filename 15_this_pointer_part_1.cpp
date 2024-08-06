/*
0> Object pointer 
    - A pointer contains address of an object is called object pointer

0> This pointer 
    - this is keyword 
    - this is a local object pointer in every instance member function containg address of the caller object 
    - this pointer can not be modify 
    - it is used to refer caller object in member function

*/

#include<iostream>

using namespace std;

class Box{
private:
    int l,b,h;
public:
    void setDimention(int l , int b, int h ){ // same name of local variable (setDimention variable)
        this->l = l ; this->b = b ; this->h = h;//this pointer develped 
    }
    void showDimention(){
        cout<<" L is "<<l<<" B is "<< b<<" H is "<<h<<endl;
    }

};

int main(){

Box smallbox,*ptr;
ptr = &smallbox;

ptr->setDimention(10,12,14);
ptr->showDimention();

// smallbox.setDimention(10,20,30);
// smallbox.showDimention();
    return 0 ;
}