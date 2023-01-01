#include<iostream>
using namespace std;
class A{
    int a;
    public:
        // void setdata(int a){// actually here we can't directly assign the value beacuse in c++ the more priority is given 
        //                     // to local variable compare to class variable so we have to use this(it is mainly use to return value in pointer concept)
        //     this->a= a;
        // }
        A &  setdata(int a){
            this->a= a;
            return *this;
        }
        void getdata(){
            cout<<" the value of a is "<<a<<endl;
        }
};
//'this'   is a keyword which is a pointer which points to the object which invokes the member function

int main(){
    A a;
    //a.setdata(4);
    a.setdata(55).getdata();

    
    return 0;
}