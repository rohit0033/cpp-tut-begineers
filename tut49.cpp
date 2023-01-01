#include<iostream>
using namespace std;
/* 
syntax for initialization list in constructors :
constructors( arguments - list) : intialization section
{
    assignment + other code;

}
*/
class Test{
    int a;
    int b;
    public:
        // Test(int i , int j) : a(i) , b(j){
        //Test(int i , int j) : a(i) , b(j+i){
        //Test(int i , int j) : a(i) , b(a+j){
        Test(int i , int j) : b(j) , a(i+b){ // this will not give correct value beacuse we declare a first so it will intialize first 
            cout<<"constructor executed"<<endl;
            cout<<"the value of a is"<<a<<endl;
            cout<<"the value of b is"<<b<<endl;
        }
};

int main(){
    Test t( 4, 6);
    
    return 0;
}