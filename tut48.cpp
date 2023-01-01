#include<iostream>
using namespace std;
/*
Case 1;
class B : public A{
    // order of execution of constructor --> first A() the B()
};
Case2:
class A : public B , public C{
    // Order of execution of constructor --> B() then C() and A()
};

Case 3:
Class A : public B, virtual public C{
    // order of execution of constructor ---> C() the B() and A() 
}



*/

class Base1{
    int data1;
    public:
        Base1(int i){
            data1= i;
            cout<<"Base1 class constructor  is  called "<<endl;
        }
        void printDataBase1(void){
            cout<<" the value of data1 is"<<data1<<endl;
        }


};
class Base2{
    int data2;
    public:
        Base2(int i){
            data2= i;
            cout<<"Base2 class constructor  is  called "<<endl;
        }
        void printDataBase2(void){
            cout<<" the value of data2 is"<<data2<<endl;
        }


};

class Derived : public Base1 , public Base2{
    int derived1 , derived2;
    public:
        Derived(int a , int b , int c , int d): Base1(a), Base2(b){
            derived1 = c;
            derived2 = d;
            cout<<"derived class constructor is called "<<endl;
        }
        void printdata(void){
            cout<<" the value of derived1 is "<< derived1 <<endl;
            cout<<" the value of derived2 is "<< derived2 <<endl;
        }
};
int main(){
    Derived rohit( 1 , 2 , 3 , 4);
    rohit.printDataBase1();
    rohit.printDataBase2();
    return 0;
}