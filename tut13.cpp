#include<iostream>
using namespace std;

int main(){
    // array example 
    
     int marks[4]={12,34,45,56};
    // cout<<marks[0]<<endl;
    // cout<<marks[1]<<endl;
    // cout<<marks[2]<<endl;
    // cout<<marks[3]<<endl;
    // marks[2]=69;
    // cout<<marks[2]<<endl;
    // // we cange the value in array 
    // // we can use the loop in the array also
    // for ( int i = 0; i < 4; i++)
    // {
    //     cout<<"the vale of marks "<<i<<" is "<<marks[i]<<endl;
    //     /* code */
    // }
    // **** while loop *****
    // int i = 0  ;
    // while (i<=4){
    //     cout<<"the vale of marks "<<i<<" is "<<marks[i]<<endl;
    //     i=i+1;
    
    // }
    // array and pointers we dont need to use & in arrays 
    // address(new)=address incriment+ sizeof(DATATYPE)
    //eg           32+1*4
    //             =36
    int *p= marks;
    cout<<"the value of marks[0] is "<<*p<<endl;
    cout<<"the value of marks[0] is "<<*(p+1)<<endl;
    cout<<"the value of marks[0] is "<<*(p+2)<<endl;
    cout<<"the value of marks[0] is "<<*(p+3)<<endl;
    cout<<*(p++);
    cout<<*p; 
    

    
    

    return 0;
}