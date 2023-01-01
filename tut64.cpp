#include<iostream>
using namespace std;

template<class T>

class vector{
    public:
        T  * arr;
        int size;
            vector(int m){
                size = m;
                arr = new T[size];
            }
        T  dotproduct(vector &v){
            T d = 0;
            for (int i = 0; i< size; i++)
            {
                d += this->arr[i] * v.arr[i];
            }
            return d;            
        }
};

int main(){
    // vector v1(3);
    // v1.arr[0] = 4;
    // v1.arr[1] = 3;
    // v1.arr[2] = 1;

    // vector v2(3);
    // v2.arr[0] = 1;
    // v2.arr[1] = 0;
    // v2.arr[2] = 1;
    // if want to use float we have to change replace int from int so we have to change all  thing o we use templates
    vector <float> v1(3);
    v1.arr[0] = 4.32;
    v1.arr[1] = 3.25;
    v1.arr[2] = 1.68;

    vector <float> v2(3);
    v2.arr[0] = 1.23;
    v2.arr[1] = 2.36;
    v2.arr[2] = 1.54;
    float a = v1.dotproduct(v2);
    cout<<a<<endl;



    return 0;
}