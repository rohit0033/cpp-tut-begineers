#include<iostream>
using namespace std;
template <class T>
void swapp(T &a, T &b){
    T temp = a;
    a=b;
    b =  temp ;
}
template<class T1 , class T2>
float funcAverage(T1 a , T2 b){
    float avg = (a+b)/2.0;
    return avg;
}

int main(){
    float a;
    a =  funcAverage(5, 2);
    printf("the average  value of these numers is %.3f", a);
    int x = 5 , y = 7;
    swapp(x , y);
    cout<<x<<endl<<y;
     
    
    return 0;
}