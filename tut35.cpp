#include<iostream>
using namespace std;
// destructor never takes an argumet nor does it return any value
int count = 0;
class num{
    public:
        num(){
            count++;
            cout<<"this is the time when constructor is called for object number"<<count<<endl;

        }

        ~num(){
            cout<<"the is the time when destructor is called for object number"<<count<<endl;
            count--;
        }
};


int main(){
    cout<<"we are inisde the main function "<<endl;
    cout<<"creating first object n1"<<endl;

    num n1;
    {
        cout<<"entering this block "<<endl;
        cout<<"creating two more objects "<<endl;
        num n2 , n3;
        cout<<"exiting this block"<<endl;
    }// whenever wo go outside th box the destructor automatically is invoked
    cout<<"back to main "<<endl;
    return 0;
}      