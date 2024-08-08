// Overloading of insertion and extraction operator 

#include<iostream>
using namespace std; 
class complex{

    private:
        int a , b ; 
    public:
        void set_data( int x , int y ){
            a= x ; b = y ; 
        }
        void show_data(){
            cout<<" a is "<<a<< "b is " << b; 
        }

        friend ostream& operator<<(ostream&,complex );
        friend istream& operator>>(istream&,complex&);
};

ostream& operator<<(ostream &dout,complex c){
    cout<<"\n a "<<c.a<<" b "<<c.b;
    return (dout);

}

istream& operator>>(istream &din,complex&c){
    cin>>c.a>>c.b;
    return (din);
}

int main(){

complex c1;
cout<< " enter a complex number";
cin>>c1;
cout<<" vlaue entered";
cout<<c1;

    return 0;
}