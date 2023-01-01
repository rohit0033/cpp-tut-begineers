// #include<iostream>
// using namespace std;
// int sum(int a , int b){
//     int c = a+b;
//     return c;
// }

// int main(){
//     int num1,num2;
//     cout<<"enter the valur of a"<<endl;
//     cin>>num1;
//     cout<<"enter the valur of b"<<endl;
//     cin>>num2;
//     cout<<"the sum of a and b is "<<sum(num1,num2);

    
//     return 0;
//}
// fuction prototype -- it gives the assurity that that function is defined later u can continue 
// syntax type function -name (arguments);
#include<iostream>
using namespace std;
//int sum(int a , int b);// you can see the function protoype here 
//int sum(int a,b);// not acceptable wrong syntax
int sum(int , int);// acceptable 
void g(void);
int main(){
    int num1,num2;
    // num1 nad num2 are the actual parameters 
    cout<<"enter the valur of a"<<endl;
    cin>>num1;
    cout<<"enter the valur of b"<<endl;
    cin>>num2;
    cout<<"the sum of a and b is "<<sum(num1,num2);
    g();

    return 0;
}
int sum(int a , int b){
    // a and b are the formal parameters will be the taking the value from actual parametrs num1 and num2
    int c = a+b;
    return c;
}
void g(){
    cout<<"\ncode is completed aab kya dekh raha hai";
    
}