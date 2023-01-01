#include<iostream>
using namespace std;
//int convertfive(int n);
int main(){
    // int T;
    // cout<<"enter the length of the number";
    // cin>>T;
    int N = 0;
    cin>>N;
    
    int arr[N];
    //for(int i=0; i<N; i++){
        cin>>arr[N];
    //}
    for (int j = 0; j < N; j++)
    {
        if(arr[j]==5){
            arr[j]=0;
            //cout<<arr[j]<<endl;

        }
        
    
    }
    cout<<arr<<endl;
    
        
        
    


    
    
    return 0;
}