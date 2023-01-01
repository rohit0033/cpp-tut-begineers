// ploymorphism means objects which are belong to diffrent class responds to same messages 

#include<iostream>
using namespace std;
class BaseClass{
    public:
        int var_base = 45;
        virtual void display(){
            cout<<"Displaying base class variables var_base"<< var_base <<endl;
        }
};

class DerivedClass : public BaseClass{
    public:
        int var_derived = 32465;
        void display(){
            cout<<"Displaying base class variables var_base "<< var_base <<endl;
            cout<<"Displaying derived class variables var_base "<< var_derived <<endl;
        }
};



int main(){
    BaseClass *base_class_pointer; 
    BaseClass obj_base;
    DerivedClass obj_derived;
    base_class_pointer = &obj_derived;
    base_class_pointer->display();
    return 0;
}