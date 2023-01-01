#include<iostream>
using namespace std;
// here we cant use structre beavuse in structre we cant declare private variables so for security reason we are using class here we go---->
class employee
{
    private:
    int a, b, c;
    public:
    int d,e;
    void setData(int a1,int b1, int c1);// declration we can use this now or we can use it later
    
    void getdata(){
        cout<<"the value a is "<<a<<endl;
        cout<<"the value b is "<<b<<endl;
        cout<<"the value c is "<<c<<endl;
        cout<<"the value d is "<<d<<endl;
        cout<<"the value e is "<<e<<endl;
        
    }
    


};
void employee :: setData(int a1, int b1, int c1){
    
    a=a1;
    b=b1;
    c=c1;
}


int main(){
    employee rohit;
    //rohit.a=134// we cant give direct value to private variables so it give an error
    rohit.d= 34;
    rohit.e= 89;
    rohit.setData(1,2,3);
    rohit.getdata(); 

    
    return 0;
}

