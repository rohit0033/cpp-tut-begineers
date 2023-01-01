#include<iostream>
using namespace std;
class BaseClass{
    public:
        int var_base;
        void display(){
            cout<<"Displaying base class variables var_base"<< var_base <<endl;
        }
};

class DerivedClass : public BaseClass{
    public:
        int var_derived;
        void display(){
            cout<<"Displaying base class variables var_base"<< var_base <<endl;
            cout<<"Displaying derived class variables var_base"<< var_derived <<endl;
        }
};



int main(){
    BaseClass *base_class_pointer; // making base_class_pointer as a pointer 
    BaseClass obj_base;
    DerivedClass obj_derived;
    base_class_pointer = &obj_derived;// poiinting base class pointer to derived class

    base_class_pointer->var_base = 74;
   // base_class_pointer-> var_derived = 454; it will throw an error becoz we made the pointer object for base class not derived class 

    base_class_pointer->display();

    DerivedClass *derived_class_pointer; 
    derived_class_pointer = &obj_derived;
    derived_class_pointer->var_base = 66;
    derived_class_pointer->var_derived = 66;
    derived_class_pointer->display();

    return 0;
}