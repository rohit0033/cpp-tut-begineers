// #include<iostream>
// using namespace std;
// struct employee
// {
//     int eId;
//     char favchar;
//     float salary;
// };

// int main(){
//     struct employee rohit;
//     rohit.eId= 1;
//     rohit.favchar='d';
//     rohit.salary=10000000;
//     cout<<rohit.eId<<endl;
//     cout<<rohit.favchar<<endl;
//     cout<<rohit.salary<<endl;
    
//     return 0;
// }
// // another method 
// #include<iostream>
// using namespace std;
// typedef struct employeee
// {
//     int eId;
//     char favchar;
//     float salary;
// }ep;

// int main1(){
//     ep  avinash;
//     avinash.eId= 2;
//     avinash.favchar='a';
//     avinash.salary=10000000000;
//     cout<<avinash.eId<<endl;
//     cout<<avinash.favchar<<endl;
//     cout<<avinash.salary<<endl;
    
//     return 0;
// }
// **** unions******
// unions must be use better memory management because it can take value on one time and the overwrites tha memory for other value
// another method 
#include<iostream>
using namespace std;
union money
{
    int rice;
    char car;
    float pounds;
}ep;

int main(){
    //*** union we can use for comparison**
    enum Meal{breakfast, lunch, dinnner };
    Meal m1=lunch;
    cout<<(m1==2);
    cout<<(m1==1);
    
    // union money m1;
    // m1.rice= 34;
    // m1.car= 'c';
    // cout<<m1.car;
    // return 0;
}
