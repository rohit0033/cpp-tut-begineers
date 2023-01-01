#include<iostream>
#include<map>
#include<string>
using namespace std;

int main(){
    map<string,int>marksMap;
    marksMap[" rohit"] = 56;
    marksMap[" abhay"] = 96;
    marksMap["ayushmann"] = 98;
    map<string,int>:: iterator iter;
    for(iter = marksMap.begin(); iter!=marksMap.end(); iter++){
        cout<<(*iter).first<<" "<<(*iter).second<<"\n";
    }
    
    
    return 0;
}
