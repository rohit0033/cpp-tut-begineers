#include<iostream>
using namespace std;

// forward decleration 
class Complex;

class Calculator{
    public:
        int add(int a, int b){
            return(a+b);
        }
        int sumrealcomplex(Complex , Complex );
        int sumimagcomplex(Complex , Complex );
    
        
};
class Complex{
    int a,b;
    //individually declearing functions as friends 
    // friend int Calculator :: sumrealcomplex(Complex , Complex );
    // friend int Calculator :: sumimagcomplex(Complex , Complex );
    // if there are too many functions we cant make too friends class so we can whole class as a friend 
    friend class Calculator;
    public:
        void setNumber(int n1 , int n2){
            a=n1;
            b=n2;
        }
       
        void printnumber(){
            cout<<"Your number is"<<a<<" + "<<b<<"i"<<endl;
        }
};

int Calculator :: sumrealcomplex(Complex o1, Complex o2){
            return (o1.a+o2.a);
}

int Calculator :: sumimagcomplex(Complex o1, Complex o2){
            return (o1.b+o2.b);
}

int main(){
    Complex o1 ,o2;
    o1.setNumber(1,4);
    o2.setNumber(5,7);
    Calculator calc;
    int res =calc.sumrealcomplex( o1 , o2);
    int res1 =calc.sumimagcomplex( o1 , o2);
    cout<<"the sum of real part is "<<res<<endl;
    cout<<"the sum of imaginary   part is "<<res1<<endl;

    
    return 0;
}