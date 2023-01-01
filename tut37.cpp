#include <iostream>
using namespace std;

// base class
class Employee
{

public:
    int id;
    float salary;
    Employee(int inpId)
    {
        id = inpId;
        salary = 34.0;
    }
    Employee(){}
};
/*
class {{derived-class-name}}: {{visibility mode } {{base- class-name}}
{
    class members/methods/etc....
}

Note 
1. default visibilty mode is private
2 private visibility : public members of the base class becomes private members of the derived class 
3 public visibility : public members of the base class becomes public members of the derived class 
4 private members are never inherited
*/
// creating a programmer class derived from employee base class
class Programmer : Employee
{
public:
    int languageCode;
    Programmer(int inpId){
        id = inpId;
        languageCode = 9;
    
    }
    void getdata(){
        cout<<id<<endl;
    }
};
int main()
{
    Employee rohit(1), rohan(2);
    cout << rohit.salary << endl;
    cout << rohan.salary << endl;
    Programmer skillF(1);
    cout<<skillF.languageCode<<endl;
    //cout<<skillF.id<<endl;// it will throw an error because id is private member in Progammar class beacuse we didn't give visibilty mode so by dafault it private
    skillF.getdata();

    return 0;
}