// example of recursion
#include<iostream>
using namespace std;

int fib(int n){
    if(n<2){
        return 1;
    }
    return fib(n-2)+fib(n-1);
}

int factorial(int n){
    if (n<=1){
        return 1;

    }
    return n*factorial(n-1);
}
int main(){
    int a;
    cout<<"write the number who u wnats to find the factorial "<<endl;
    cin>>a;
    // cout<<"the factorial of"<<a<<"is"<<factorial(a);
    cout<<"the fabiinici of"<<a<<"is"<<fib(a)<<endl;
    
    return 0;
}
