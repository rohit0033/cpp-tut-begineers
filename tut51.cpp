#include<iostream>
using namespace std;
class Complex
{
    int real , imaginary;
    public:
        void setData( int a , int b){
            real=a;
            imaginary = b;
        }
        void getData(){
            cout<<"the value of real part is "<<real<<endl;
            cout<<"the value of imaginary part is "<<imaginary<<endl;
        }


};

int main(){
    // this is one way to do
    // Complex c1;
    // Complex *ptr = &c1;
    // (*ptr).setData( 1 , 54);
    // (*ptr).getData();
    

    // this sanother way
    Complex *ptr = new Complex;
    (*ptr).setData( 1 , 54);
    (*ptr).getData();
    // by using arrow operator 
    Complex *ptr1 = new Complex;
    ptr1->setData(55 ,69);
    ptr1->getData();
    
    //arr of objects
    Complex *ptr2 = new Complex[4];
    ptr2->setData(55 ,69);
    ptr2->getData();
    
    return 0;
}