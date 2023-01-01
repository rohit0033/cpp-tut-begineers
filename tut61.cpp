#include<iostream>
#include<fstream>
#include<string>
using namespace std;


int main(){
    ofstream out;
    out.open("sample60.txt");
    out<<"this is me\n";
    out<<"  this is also"<<endl;
    out<<"  kitne baar print karoge"<<endl;
    out<<"  yeh last tha"<<endl;
    out.close();

    ifstream in;
    string st , st2;
    in.open("sample60.txt");
    while(in.eof()== 0){
        getline(in , st);
        cout<<st<<endl;
    }
    
    return 0;
}