#include<iostream>
#include<fstream>


using namespace std;

int main(){
    ofstream rout("sample60.txt");

    // creating a name string and filling it with the string entered by the user 
    string name;
    cout<<" enter your name : rohhit";
    cin>>name;

    // writing a steing to a file 
    rout<<name + " is my name ";
    rout.close();

    ifstream rin("sample60.txt");
    string content;
    rin>>content;
    cout<<"the content of this file is: "<<content;
    rin.close();
    return 0;
}