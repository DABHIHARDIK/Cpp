// Default arguments

#include<iostream>
using namespace std;
int add( int , int = 0 , int = 0 );// Default arguments 

int main(){

int a,b,c; 
cout<<"enter a number";
cin>>a>>b>>c;
cout<<"1st value"<<add(a)<<endl;
cout<<"2nd value"<<add(a,b)<<endl;
cout<<"3rd value"<<add(a,b,c);
    return 0 ;
}

int add ( int x , int y , int z){
    return(x+y+z);
}