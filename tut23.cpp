#include<iostream>
using namespace std;
class Shop
{
    int itemId[100];
    int itemPrice[100];
    int counter = 0 ;

public:
    //void initcounter(void) { counter=0;}
    void setPrice(void);
    void diplayprice(void);


};
void Shop ::setPrice(void)
{
    cout<<"enter id of your product no"<<counter+1<<endl;
    cin>> itemId[counter];
    cout<<"enter price of your items"<<endl;
    cin>> itemPrice[counter];
    counter++;

}
void Shop ::diplayprice(void)
{
    for (int i = 0; i < counter; i++)
    {
        cout<<"the price of item id "<<itemId[i]<<"is"<<itemPrice[i]<<endl;
    }
    
}

int main(){
    Shop dukaan;
    //dukaan.initcounter();
    dukaan.setPrice();
    dukaan.setPrice();
    dukaan.setPrice();
    dukaan.diplayprice();
    
    return 0;
}