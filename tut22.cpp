// oops- class and objects 
// class-->> extension of structres (in c)
// structre had limitations 
        //  ---> members are public
        //  ---> no methods
// classes--> structres +more
// classes--> can have methods and properties
//classes--> can make few membersas private and few as public


// nesting of member functions
#include<iostream>
#include<string>
using namespace std;
class binary
{
    string s;

public:
    void read(void);
    void chk_bin(void);
    void ones_compliment(void);
    void display(void);


};
void binary :: read(void)
{
    cout<<"enter a binary number"<<endl;
    cin>>s;
}
void binary :: chk_bin(void)
{
    for (int i = 0; i < s.length(); i++)

    {
        if (s.at(i)!='0' && s.at(i) !='1')
        {
            cout<<"incorrect binary format"<<endl;
            exit(0);

        }
    }
    
}
void binary :: ones_compliment(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i)=='0')
        {
            s.at(i)='1';
        }
        else 
        {
            s.at(i)='0';
        }

    }

}
void binary :: display(void)
{
    cout<<"displaying binary number"<<endl;
     for (int i = 0; i < s.length(); i++)
     {
         cout<<s.at(i);
     }
     cout<<endl;
}

int main(){
    binary b;
    b.read();
    b.chk_bin();
    b.ones_compliment();
    b.display();
    
    return 0;
}