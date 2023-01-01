#include <iostream>
using namespace std;
class Numbers
{
    int a;

public:
    Numbers()
    {
        a = 0;
    }
    Numbers(int Num)
    {
        a = Num;
    }
    // when no copy contructor is found , compiler supllies its own constructor
    Numbers(Numbers &obj)
    {
        cout << " the copy constructor is called !!" << endl;
        a = obj.a;
    }
    void display()
    {
        cout << "the entered number is " << a << endl;
    }
};

int main()
{
    Numbers x, y, z(69);
    x.display();
    y.display();
    z.display();
    Numbers z1(x);// copy constructorinvoked
    z1.display();
    //z2= z; // copy constructor bot called
    Numbers z3=z;// copy constructor invoked
 
    return 0;
}