#include <iostream>
#include <stdio.h>
#include <deque>
using namespace std;

int main(){
    deque <int> d;

    d.push_back(3);
    d.push_front(8);
    d.push_front(9);
    d.push_back(54);

    for(int i:d){
        cout<<i<<"  ";
    }
    
    cout<<"Size : "<<d.size()<<endl;
    cout<<"Index 1 element : "<<d.at(1)<<endl;
    cout<<"Front element is : "<<d.front()<<endl;
    cout<<"Last element is : "<<d.back()<<endl;
    cout<<"Empty or not :  "<<d.empty()<<endl;

    cout<<"Before pop :"<<endl;
    for(int i:d){
        cout<<i<<"  ";
    }

    d.pop_back();

    cout<<endl<<"After pop_back :"<<endl;
    for(int i:d){
        cout<<i<<"  ";
    }

    d.pop_front();

    cout<<endl<<"After pop_front :"<<endl;
    for(int i:d){
        cout<<i<<"  ";
    }
    return 0;
}