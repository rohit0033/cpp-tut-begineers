#include<iostream>
using namespace std;
class c2;
class c1{
    int val1;
    friend void exchange (c1 & , c2 &);
    public:
        void indata(int a){
            val1=a;
        }
        void display(void){
            cout<<val1<<endl;

        }
};
class c2{
    int val2;
    friend void exchange (c1 & , c2 &);
    public:
        void indata(int a){
            val2=a;
        }
        void display(void){
            cout<<val2<<endl;
            
        }
};
void exchange(c1 &x , c2 &y){
    int tmp = x.val1;
    x.val1=y.val2;
    y.val2=tmp;
}

int main(){
    c1 a1;
    c2 a2;
    a1.indata(34);
    a2.indata(67);
    exchange(a1 , a2);
    a1.display();
    a2.display();
    return 0;
}