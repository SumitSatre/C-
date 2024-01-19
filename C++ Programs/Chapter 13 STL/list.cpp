#include <iostream>
#include <stdio.h>
#include <list>
using namespace std;

int main(){
    list <int> l;

    l.push_back(3);
    l.push_front(8);
    l.push_front(9);
    l.push_back(54);

    for(int i:l){
        cout<<i<<"  ";
    }
    
    cout<<"\nSize : "<<l.size()<<endl;
    cout<<"Front element is : "<<l.front()<<endl;
    cout<<"Last element is : "<<l.back()<<endl;
    cout<<"Empty or not :  "<<l.empty()<<endl;


    cout<<"Before pop :"<<endl;
    for(int i:l){
        cout<<i<<"  ";
    }

    l.pop_back();

    cout<<endl<<"After pop_back :"<<endl;
    for(int i:l){
        cout<<i<<"  ";
    }

    l.pop_front();

    cout<<endl<<"After pop_front :"<<endl;
    for(int i:l){
        cout<<i<<"  ";
    }
    return 0;
}