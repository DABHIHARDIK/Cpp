// Encapsulation mathed

#include<iostream>
using namespace std;
struct book{


    private: // Private variable 

    int bookid; 
    char title[20];
    float price; 


    public: // Public variable 
    void input(){
    cout<<"enter book id,title and price";
    cin>>bookid>>title>>price;
    }
    
    void display(){
    cout<<"bookid "<<bookid<<"  bookname "<<title<<" book price "<<price;
    }

};

book input();
void display(book);

int main(){
    
    book b2 ;
    b2.input();
    b2.display();
    
    return 0 ;

}


 
