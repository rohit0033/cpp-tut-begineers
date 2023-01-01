// example of array in class
#include<iostream>
using namespace std;
class Employee
{
    int id;
    int salary;
public:
    void setdata(void)
    {
        salary=12233;
        cout<<"enter the salary"<<endl;
        cin>>id;
    }
    void getdata(void){
        cout<<"the id of this employee is "<<id<<endl;
    }
};

int main(){
    Employee fb[4];
    for (int i=0 ; i<4; i++){
        fb[i].setdata();
        fb[i].getdata();
    }
    
    return 0;
}