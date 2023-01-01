#include<iostream>
using namespace std;
// volume of cylinder
int volume(double r, int h){
    return (3.14 *r*r*h);
}
// volume of cube

int volume(int a){
    return a*a*a;
}
// volume of cuboid
int volume ( int l , int b , int h){
    return(l*b*h);
}
int main(){
    cout<<"the volume of cuboid "<<volume(3,7,6)<<endl;
    cout<<"the volume of cuboid "<<volume(3)<<endl;
    cout<<"the volume of cuboid "<<volume(3,7)<<endl;
    
    return 0;
}