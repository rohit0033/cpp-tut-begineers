#include<iostream>
using namespace std;

int main(){
    //what is pointer?---> data type which holds the address of others data types
    // &a means address of a means where in the ram a is store 
    int a=3;
    int*b=&a;
    cout<<b<<endl;
    cout<<*b<<endl;
    //*(value at operator)>-- dereference operator
    cout<<&a<<endl;
    //&>--- address of the operator 
    // we can make pointer to pointer 
    int**c=&b;
    cout<<c<<endl;
    cout<<"the address of c is"<<*c<<endl;
    cout<<"the value at address value_at(value_at(c))  is"<<**c<<endl;


    return 0;
}