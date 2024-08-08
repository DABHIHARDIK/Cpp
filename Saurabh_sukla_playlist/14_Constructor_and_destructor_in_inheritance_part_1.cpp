/*
0> Questions
    - we know that constructor is invoked implicitly when an object is created.
    - In inheritance , when we create object of derived class , what will happen ?


0> constructor
- Call in constructor child to prerent
- Execusion perent to child


0> destructor
    - calling is same
    - Execution is reverse first chid end and after that perent will end
*/
#include <iostream>

using namespace std;

class A
{
    int a;

public:
    A(int k)
    {
        a = k;
    }
    ~A()
    {
        cout << "end class A"<<endl;
    }
    void showdata()
    {
        cout << "data is " << a<<endl;
    }
};

class B : public A
{
    int b;
    int a;

public:
    B(int x, int y) : A(x)
    {
        b = y;
        a = y;
    }

    void howdata()
    {
        cout << "B show data is " << a<<endl;
    }
    ~B()
    {
        cout << "B class end"<<endl;
    }
};

int main()
{

    B demo(10, 15);

    demo.showdata();
    demo.howdata();
    return 0;
}