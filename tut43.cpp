#include <iostream>
using namespace std;

class Base1
{
public:
    void greet(){
        cout<<"how are you"<<endl;
    }
};
class Base2
{
public:
    void greet(){
        cout<<"ki haal chal "<<endl;
    }
};

class Derived : public Base1 , public Base2{
    int a;
    public:
       void greet(){

       
           Base2 :: greet();// it  will solve the ambiguity 
       }
}; 


class B{
    public:
       void say(){
           cout<<"hello world "<<endl;
       }
};
class D : public  B{
    public:
       void say(){
           cout<<" hello my beautifull world "<<endl;
       }

};




int
main()
{
    // ambiguity 1
    // Base1 rohit;
    // Base2 rachit;
    // rohit.greet();
    // rachit.greet();
    // Derived d;
    // d.greet(); // it will give ambiguity because two greet function derived classs so we have to resolve ambiguity 


    // Ambiguity 2

    D rohit;
    rohit.say();



    return 0;
}