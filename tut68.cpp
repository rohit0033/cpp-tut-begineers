#include<iostream>
using namespace std;

template<class T>
class Rohit{
    public:
        T data;
        Rohit( T a){
            data = a;
        }
        void display();
};

template <class T>
void Rohit<T>:: display(){
    cout<<data;
}

void func(int a){
    cout<<" i am first func()"<<a<<endl;
}

template <class T>
void func( T a){
    cout<<" i am templatised func()"<<a<<endl;
}
template <class T>
void func1( T a){
    cout<<" i am templatised func()"<<a<<endl;
}

int main(){
    Rohit<float>h(5.7);
    // Rohit<char>h('c');
    // Rohit<int>h(5);
    cout<<h.data<<endl;
    h.display();
    func(4); // exact make takes the hihest priority 
    return 0;
}