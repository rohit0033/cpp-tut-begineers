#include<iostream>
using namespace std;
class Complex
{
    int a, b;
public:
    Complex(int , int );// constructor decleration 
    void printNumber()
    {
        cout<<"your number is "<< a << "+"<< b << "i" << endl;
    }
};
Complex :: Complex(int x , int y) // >>>  it i parmaterize constructor as it takes two parameters 
{
    a= x;
    b= y;
    //cout<<"hello world"<<endl;
}


int main(){
    // implict call
    Complex z(4 , 6 );
    // explict call
    Complex b = Complex(9,8);
    z.printNumber();
    b.printNumber();
    
    return 0;
}