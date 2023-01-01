#include<iostream>
using namespace std;
template< class T1= int , class T2 = float , class T3 = char>
class rohit{
    public:
        T1 a;
        T2 b;
        T3 c;
        rohit( T1 x , T2 y , T3 z){
            a=x;
            b=y;
            c=z;
        }
        void display(){
            cout<<" the valur of a is "<<a<<endl;
            cout<<" the value of b is "<<b<<endl;
            cout<<" the value of c is "<<c<<endl;
        }
};
int main(){
    // here is default template 
    rohit<> r( 1,7.7, 'c');
    r.display();

    cout<<endl;
    
    // here is value assigned template 
    rohit<float , char , char > g(1.5, 'o' , 'f');
    g.display();
    
    return 0;
}