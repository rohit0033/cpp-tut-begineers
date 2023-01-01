#include<iostream>
using namespace std;

int main(){
    // Basic example of dynamically alloted integer
    int a =9;
    int*ptr =&a;
    *ptr = 999;

    cout<<"the value of a is "<< *(ptr)<<endl;
    float *p = new float(55.36);
    cout<<"the value of address p is "<<*(p)<< endl;
    //dynamically alloted array mtlb means fill block of vaue
    int *arr = new int[3];
    arr[0] = 10;
    *(arr+1) = 20;
    arr[2] = 30;
    //delete arr; ---> it will delete the array and return garbage values 
    cout<<"the value of arr[0] is "<< arr[0] <<endl;
    cout<<"the value of arr[1] is "<< arr[1] <<endl;
    cout<<"the value of arr[2] is "<< arr[2] <<endl;
    return 0;
}