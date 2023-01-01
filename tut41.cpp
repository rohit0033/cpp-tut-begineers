#include<iostream>
using namespace std;
/*
syntax for inhertating (((----.=>mutilple inheritance
class DerivedC: visibility- mode base1 , visibility - mode base 2
{
    class body of class "derived"
}  
*/

class Base1{
protected:
    int base1int;
public:
    void set_base1int(int a){
        base1int = a;
    }

      

};
class Base2{
protected:
    int base2int;
public:
    void set_base2int(int a){
        base2int = a;
    }

      

};

class Derived : public Base1 , public Base2{
    public:
        void show(){
            cout<<"the value of base1 is "<<base1int<<endl;
            cout<<"the value of base2 is "<<base2int<<endl;
            cout<<"the value of sum is "<<base2int + base1int <<endl;
        }

};

int main(){
    Derived rohit;
    rohit.set_base1int(44);
    rohit.set_base2int(54);
    rohit.show();
    
    return 0;
}