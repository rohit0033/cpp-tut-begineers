#include<iostream>
using namespace std;
class Employee{
    int id;
    //int count;// this count value will no go in every object it reamins same so we have to make static variable
    static int count ;
    public:
        void setdata(void){
            cout<<"enter the id"<<endl;
            cin>>id;
            count++;

        }
        void getdata(void){
            cout<<"the id of employee is "<<id<<"and this is employee number"<<count<<endl;
        }
        // we have to make static fuction because because we cant directle access static variable to we have to static 
        static void getcount(void){
            cout<<"the value of count is "<<count<<endl;
        }

};
int Employee:: count;//default value is 0 but we chnage the value by giving like count =100


int main(){
    Employee harry, rohan, lavish;
    harry.setdata();
    harry.getdata();
    Employee::getcount();
    
    rohan.setdata();
    rohan.getdata();
    Employee::getcount();

    lavish.setdata();
    lavish.getdata();
    Employee::getcount();
    return 0;
}