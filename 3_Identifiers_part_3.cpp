/* 
o> Output Instruction 
O> Input instruction 
o> about iostream.h 
o> sample program 
*/

/*
o>output Instruction 
    - In C , standard output device is monitor and printf() is use to send data / message to monitor . 
    - printf() is predefined function 
    - In C++ we can use cout to send data/message to monitor . 
    - cout is a predefined object 
    - the operator << is called the insertion or put to operator 

    printf("Hello SCA");
    cout<<"Hello SCA";

    printf("sum of %d and %d is %d",a,b,c);
    cout<<"sum of" <<a<< "and" <<b<< " is "<<c; 

    printf("%d",a+b);
    cout<<a+b ; 


o> Input Instruction 
    - In C, Standard input device is keyboard and scanf() is use to receive data from keyboard 
    - scanf() is a predefined function 
    - In C++ , we can use cin to input data from keyboard 
    - The identifier cin is a predefined object in C++
    - The operator >> is know as extraction or get from operator 
    - 
    - scanf("%d",&a);
    - cin>>a; 

    - scanf("%d%d",&a,&b);
    - cin>>a>>b

    - scanf("%d%f",&a,&c);
    - cin>>a>>b;

    - According to the ANSI standards for C language , exolicit declaration of function is recommended but not mandatory .
    - ANSI standards for C++ language says explicit declaration of function is compulsory. 

O> Header Files 
    - predefined function are declared in header files, so whenever you are using any predefined 
    function in your code , you have to include specific header file that contains its declaration. 

O> About iostream.h 

    - we need to include header file iostream.h , it contains declaration s for the identifier cout and the operator <<. And also for the identifier cin and operator >> .
    - Header file contains declaration of identifiers 
    - Identifiers can be function names , variable , object macros etc

O> endl 
    - Inserting endl into the output stream causes the screen cursor to move to the beginning of the next line 
    - endl is a manipulator and it is declared in iostream.h 
    - '\n' character also works as it works in C

*/

#include <iostream>

int main() {
    int userInput;
    
    std::cout << "Please enter an integer value: ";
    std::cin >> userInput;
    
    std::cout << "You entered: " << userInput << std::endl;
    
    return 0;
}



