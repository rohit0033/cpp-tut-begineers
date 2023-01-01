#include<iostream>
using namespace std;
class Complex
{
    int a, b;
public:
    // creating a contructor
    // constructor is a special member function with the name as class
    // it is used to intialize the object in class
    // it is automatically invoked whenever an object is created
    Complex(void);// constructor decleration 
    void printNumber()
    {
        cout<<"your number is "<< a << "+"<< b << "i" << endl;
    }
};
Complex :: Complex(void) // >>> default constructor 
{
    a= 10;
    b= 30;
    cout<<"hello world"<<endl;
}

int main(){
    Complex c1, c2 , c3;
    c1.printNumber();
    c2.printNumber();
    c3.printNumber();
    
    return 0;
}

/* 
chracterstics of the consstructors 
1. it should be declared in the public section of the class
2. they are automatically invoked whenever the objectis created 
3. they cannot return values and do not have return types 
4. it can have default arguments 
5. we cannot refer to their address 
*/