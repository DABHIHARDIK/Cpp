// Post increament and pre increment ( i++ , ++i)

#include<iostream>

using namespace std; 


class Integer{

    private :
        int x ; 
    public:
        void set_data(int a ){
            x = a ; 
        }
        void show_data(){
            cout<<" x is "<<x;
        }

        Integer operator++(){ // pre increment 
            Integer i; 
            i.x = ++x;
            return(i);
        }

        Integer operator++(int){ // Post increament 
            Integer i ; 
            i .x = x++; 
            return(i);
        }
};

int main(){

Integer i1 , i2; 
i1.set_data(3);
i1.show_data();
i2 = i1++;
i1.show_data();
i2.show_data();

    return 0 ; 
}