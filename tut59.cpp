#include<iostream>
#include<fstream>
/*
 the useful classes for working with files in c++ are:
 1. fstreambase
 2. ifstream --> derived from fstreambase
 3. ofstream --> derived from fstreambase
 

 in order to work withh files in c++ , you have to open it. Primarily , there are 2 ways to open a file:
 1. using the constructor 
 2. using the member function open() of the class 
 */

using namespace std;

int main(){
    string st = " rohit sharma ";
    string st2;
    // opening files using constructor   and writing it
    ofstream out("sample60.txt"); // writing operation
    out<<st;

    // opening files using constructor and reading it
    ifstream in( "sample60b.txt"); // read operation  // this will not give the output of whole line so we have to use gentline funtio
    //in>>st2;
    getline(in , st2);
    
    cout<<st2;

    return 0;
}