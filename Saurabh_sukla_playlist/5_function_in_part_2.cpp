/*
o> Benefits of function 
    - Easy to read
    - Easy to modify 
    - Avoids rewriting of same code
    - Easy to debug 
    - Better memory utilization 

0> Function is time consuming 
    - However every time a function is called it takes lot of extra time in executing a series 
    of instruction for tasks such as jumping to the function , saving register , pushing arguments 
    into the stack adn returning to the calling function . 
    - Solution 
        - so when function is small it is worthless to spend so much extra time in such tasks in cost of saving 
            comparatively small space 

0> Inline Function 
    - To eliminate the cost of calls to small function , C++ proposes a new feature called inline function 
    - An inline function is a function that is expanded line when it is invoked 
    - conpiler replaces the function call with the corresponding function code.

0> Inline is a request 
    - inline ia s request not a command 
    - the benifit of speed of inline functions reduces as the function grows in size 
    - so the compiler may ignore the requesr in some situation 
        - few of them :
            - Function containign loops, switch , goto . 
            - Function with recursion 
            - Containing static variable 

*/

#include<iostream>
using namespace std;

inline void fun();//only decelartion time we need to written inline keyword 

int main(){

fun();
}

void fun(){
    cout<<"you are calling inline function ";
}