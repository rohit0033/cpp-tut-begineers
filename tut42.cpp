#include <iostream>
#include <math.h>
using namespace std;

class Simple_calculator
{
protected:
    int a;
    int b;

public:
    void set_values(float m1, float m2)
    {
        a = m1;
        b = m2;
    }
    void get_addition()
    {
        cout << " the addittion a and b is " << a + b << endl;
    }
    void get_subtraction()
    {
        cout << " the addittion a and b is " << a - b << endl;
    }
};

class Scientific_calculator
{
protected:
    int a;

public:
    void set_value(int a1)
    {
        a = a1;
    }
    void get_squareRoot()
    {

        cout << "the square root of given num is" << sqrt(a) << endl;
    }
    void get_cube()
    {

        cout << "the cube of given num is" << pow(a, 3) << endl;
    }
};

class Hybrid_calculator : public Scientific_calculator, public Simple_calculator
{
public:
    void display_result()
    {
        get_addition();
        get_subtraction();
        get_squareRoot();
        get_cube();
    }
};

int main()
{
    Hybrid_calculator rohit;
    rohit.set_values(99, 6);
    rohit.set_value(9);
    rohit.display_result();

    return 0;
}