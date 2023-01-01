#include <iostream>
using namespace std;

class Student
{
protected:
    int roll_no;

public:
    void set_rollno(int);
    void get_rollno(void);
};

void Student ::set_rollno(int r)
{
    roll_no = r;
}
void Student ::get_rollno()
{
    cout << "the roll no is" << roll_no << endl;
}

class Exam : public Student
{
protected:
    float maths;
    float physics;

public:
    void set_marks(float, float);
    void get_marks(void);
};
void Exam :: set_marks(float m1, float m2)
{
    maths = m1;
    physics = m2;
}
void Exam :: get_marks()
{
    cout << " the marks obtained in maths are :" << maths << endl;
    cout << " the marks obtained in physics are :" << physics << endl;
}

class Result : public Exam
{
    float percentage;

public:
    void display()
    {
        get_rollno();
        get_marks();
        cout << "your percentage is " << (maths + physics) / 2 << endl;
    }
};

/*
notes :
 if we are inheriting B from A and C from B :[ A---->B--->C]
 1. A is the base class for B and B is base clas for C
 2. A--->B---->C is called inheritance path
 */

int main()
{
    Result rohit;
    rohit.set_rollno(69);
    rohit.set_marks(69.0, 93.0);
    rohit.display();

    return 0;
}