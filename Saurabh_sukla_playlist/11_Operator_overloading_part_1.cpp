/*
0> Operator Overloading 
    - When an operator is opverloaded with multiple jobs , it is known as operator overloading 
    - It is a way to implement compile time Polymorphism 

0> Rule to Remember 
    - Any symbol can be used as function name 
        - If it is a valid operator in c language 
        - if it is preceded by operator keyword 
    - You can not overload sizeof and ?: operator 
*/

#include <iostream>

using namespace std;

class complex
{
private:
    int a, b;

public:
    void set_data(int x, int y)
    {
        a = x;
        b = y;
    }

    void show_data()
    {
        cout << "\na " << a << " b " << b;
    }

    complex operator +(complex c) // we can define as an operator function 
    // this the unary operator 
    {

        complex temp;
        temp.a = a + c.a;
        temp.b = b + c.b;
        return (temp);
    }
};

int main()
{

    complex c1, c2, c3;

    c1.set_data(3, 4);
    c2.set_data(3, 4);
    c3 = c1+c2;//as an operator use class complex fucntion 
    c3.show_data();

    return 0;
}