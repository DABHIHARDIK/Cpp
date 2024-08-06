/* 
0> Three important points 
    - Structure is collection of dissimilar elements 
    - structure is a way to group variables 
    - structure is used to create data types 
*/
#include<iostream>
using namespace std;
struct book{

    int bookid; 
    char title[20];
    float price; 
};

int main(){
    
    book b1 = { 100,"c++ book",102.12};
    book b2 ;
    cout<<"enter book id,title and price";
    cin>>b2.bookid>>b2.title>>b2.price; 
    cout<<"bookid "<<b2.bookid<<"  bookname "<<b2.title<<" book price "<<b2.price;
    return 0 ;

}