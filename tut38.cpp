#include<iostream>
using namespace std;
class Base{
    int data1; // private by deafault  and is not inhertable 
    public:
        int data2;
        void setData();
        int getData1();
        int getData2();
};

void Base :: setData(void){
    data1= 10;
    data2 = 20;
}
int Base :: getData1(){
    return data1;
}
int Base :: getData2(){
    return data2;
}

class Derived : public Base{ 
     // class is being derived publically
    int data3;
    public:
        void process();
        void display();
};
void Derived :: process(){
    data3 = data2 * getData1();
}

void Derived :: display(){
    cout<<" value of data1 is"<<getData1()<<endl;
    cout<<" value of data2 is"<< data2<<endl;
    cout<<" value of data1 is"<<data3 <<endl;
}
int main(){
    Derived rohit;
    rohit. setData();
    rohit. process();
    rohit. display();
    
    return 0;
}