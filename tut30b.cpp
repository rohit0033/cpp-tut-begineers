#include<iostream>
#include<math.h>
using namespace std;
class point{
    int x;
    int y;
    public:
        friend void dispoint( point , point);
        point( int a , int b){
            x=a;
            y=b;
        }


};
void dispoint( point o1 , point o2){
        int w= o2.x-o1.x;
        int e = o2.y-o1.y;

        float z= sqrt((pow( w, 2 ) ) + (pow(e , 2)) );
        cout<<"the distance between two points is"<< z << endl;
    }

int main(){
    point r(1,0);
    point s(70,0);
    dispoint(r ,s);

    
    return 0;
}