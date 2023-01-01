#include<iostream>
using namespace std;
class Complex
{
    int a, b;
public:

    Complex(){
        a=55;
        b=66;
    }
    Complex(int x , int y){
        a=x;
        b=y;
    } 
    Complex(int x){
        a=x;
        b=69;
    }
    void printNumber()
    {
        cout<<"your number is "<< a << "+"<< b << "i" << endl;
    }
};



int main(){
    Complex c1 (4, 6);
    c1.printNumber();

    Complex c2 (4);
    c2.printNumber();

    Complex c3;
    c3.printNumber();


    return 0;
}