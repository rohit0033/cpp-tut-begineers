#include<iostream>
#include<vector>
using namespace std;
template<class T>

void display(vector<T> &v){
    cout<<"display this vector : ";
    for(int i = 0 ; i< v.size(); i++)
    {
        cout<<v[i]<<" ";    // 
        //cout<<v.at(i)<<" "; // both meaning is same
    }
    cout<<endl;
}

int main(){
    vector<int> vec1; // zero length int vector 
    vector<char> vec2(4); // 4- element charactrer vector
    vector<char> vec3(vec2); // 4- element character vector from vec2
    //vector<int> vec4(6,3); // 6-element vector of 3s
    // vec2.push_back('5');
    // display(vec2);
    vector<int>vec4(6 , 13);// 
    display(vec4);


    int element , size = 5;


    // cout<<" enter the size of your vector : ";
    // cin>>size;
    // for ( int i = 0; i<size; i++){
    //     cout<<" enter the elements to add this vector : ";
    //     cin>>element;
    //     vec1.push_back(element);
    // }
    // //vec1.pop_back();
    // display(vec1);
    // vector<int> :: iterator iter = vec1.begin();

    // vec1.insert(iter+1 , 20, 556);
    // display(vec1);
    
    return 0;
}