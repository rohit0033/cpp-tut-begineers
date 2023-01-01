#include<iostream>
using namespace std;

int main(){
    int age;
     cout<<"tell me your age"<<endl;
     cin>>age;
    // if((age<18) &&( age>0)){
    //     cout<<"you are not allowed in party "<<endl;
    // }
    // else if((age==18)){
    //     cout<<"you are a kid and you are not allowed in prty "<<endl;
    // }
    // else if (age<1){
    //     cout<<"you are not born my baby-.-"<<endl;

    // }
    // else{
    //     cout<<"you can come in party my boi"<<endl;
    // }
    switch (age)
    {
    case 18:
        cout<<"you can marry now my adult boi"<<endl;
        break;
    case 22:
        cout<<"you can marry now according to law"<<endl;
        break;
    case 2:
        cout<<"bhai tu rehna de abi baacha hai "<<endl;
        break;
    
    default:
        cout<<"no special cases here you can go now"<<endl;
        break;
    }
    return 0;

}