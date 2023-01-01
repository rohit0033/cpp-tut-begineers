#include<iostream>
#include<list>
using namespace std;

void display(list<int> &lst){
    list<int> :: iterator it;
    for (it = lst.begin(); it !=lst.end(); it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;
}

int main(){
    list<int>list1; // list 0 length
    list1.push_back(5);
    list1.push_back(6);
    list1.push_back(7);
    list1.push_back(8);
    list1.push_back(12);
    display(list1);
    // removing elements from list
    list1.pop_back();
    list1.pop_front();
    list1.remove(8);
    display(list1);

    list<int> list2(3); // empty list of size 3 , in this we have to set values 
    list<int> :: iterator iter;
    iter =list2.begin();
    *iter = 45;
    iter++;
    *iter = 9;
    iter++;
    *iter = 6;
    iter++;
    display(list2);
    list1.sort();
    list2.sort();
    list1.merge(list2);
    cout<<"after merging the list: ";
    display(list1);

    return 0;
}