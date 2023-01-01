#include<iostream>
using namespace std;
// this will not swap the value 
void swap(int a , int b){ 
    int temp =a;
    a=b;
    b= temp;
    

}
// call by refrence pointers it will work beacuse it change the value from its address 
// void swapPointer( int*a , int*b){
//     int temp =*a;
//     *a=*b;
//     *b= temp;
// }
void swapRefrenceVar(int &a , int &b){
    int temp =a;
    a=b;
    b= temp;
}
// call by refrence using c++ variable 
int main(){
    int x=4 ,y=5;
    cout<<"the value of x is "<<x<<" the value of b is "<<y<<endl;
    swap(x,y);// actually this will not work 
    //swapPointer(&x ,&y);
    swapRefrenceVar(x,y);
    cout<<"the value of x is "<<x<<" the value of b is "<<y<<endl;

    
    return 0;
}