#include<iostream>
using namespace std;
/*
student ---> test[done]
student ---> sports[done]
test ---> result
sports--> result 
virtual class 
*/

class Student{
    int a;
    public:
       void set_rollno( int m1){
           a =m1;
       }
       void get_rollno(){
           cout<<" the roll no the student is "<<endl;

       }
       
};

class Test : virtual public Student{
    protected:
        float maths , physics;
    public:
        void set_marks( float m1 , float m2){
            maths = m1;
            physics = m2;
        }
        void get_marks(){
            
            cout<<" marks of maths is "<< maths << endl;         
            cout<<" marks of physics is "<< physics << endl;
            
        }
    

};

class Sports : virtual public Student{
    protected:
        int score;
    public:
        void set_score( int sc){
            score = sc;

        }
        void get_score(){
            cout<<" the score in sports is "<<score<<endl;
        }
};

class Result: public Test , public Sports{
    float total;
    public:
       void display(){
           total = maths + physics + score ;
           get_rollno();
           get_marks();
           get_score();
           cout<<"your total score is "<< total<<endl;

       }

};
int main(){
    Result rohit;
    rohit.set_rollno(1);
    rohit.set_marks( 99.5 , 98.6);
    rohit.set_score(100);
    rohit.display();
    
    return 0;
}