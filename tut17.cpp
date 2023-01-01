#include<iostream>
using namespace std;
float moneyReceived(int currentMoney, float factor=1.04){
    return currentMoney*factor;
}

int main(){
    int money=1000000;
    cout<<"if the money is "<< money <<"we should get with intrest "<<moneyReceived(money)<<"after one year"<<endl;
    
    cout<<"if the money is "<< money <<"we should get with intrest "<<moneyReceived(money,1.1)<<"after one year"<<endl;
    
    return 0;
}