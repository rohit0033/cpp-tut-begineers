#include<iostream>
using namespace std;
class Bankdeposit{
    int principal;
    int year;
    int intrest_rate;
    int return_amount;
public:
    Bankdeposit(){}
    Bankdeposit(int p , int y , float r);
    Bankdeposit(int p , int y , int R);
    void show(){
        cout<<endl<<"the principal amount was"<<principal<<endl
            <<" return value in"<<year
            <<" is "<< return_amount <<endl;
    }


};
Bankdeposit:: Bankdeposit( int p , int y , float r){
    principal=p;
    year = y;
    intrest_rate= r;
    return_amount=principal;
    for (int i = 0; i < y; i++)
    {
        return_amount=return_amount* (1+intrest_rate);
    }
    
}

Bankdeposit:: Bankdeposit( int p , int y , int  R){
    principal=p;
    year = y;
    intrest_rate= float(R)/100;
    return_amount=principal;
    for (int i = 0; i < y; i++)
    {
        return_amount=return_amount* (1+intrest_rate);
    }
    
}


int main(){
    Bankdeposit bd1 , bd2 , bd3;
    int p , y;
    float r;
    int R;
    cout<<"enter the value of p y and r"<<endl;
    cin>>p>>y>>r;
    bd1= Bankdeposit( p , y ,r);
    bd1.show();
    
    
    cout<<"enter the value of p y and R(put R value in percentage)"<<endl;
    cin>>p>>y>>R;
    bd2= Bankdeposit( p , y ,R);
    bd2.show();

    
    return 0;
}