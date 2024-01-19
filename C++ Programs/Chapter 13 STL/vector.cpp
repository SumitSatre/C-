#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector <int> v;
    vector <int> a(9,5);  // 9 Elements are pushed everyone initialise with 5 size is 9 
    for(int i:a){
        cout<<i<<"  ";
    }

    vector <int> k(a);  // It will copy the last vector
    for(int i:k){
        cout<<i<<"  ";
    }

    cout<<"Capacity : "<<v.capacity()<<endl;

    v.push_back(3);
    cout<<"Capacity : "<<v.capacity()<<endl;

    v.push_back(8);
    cout<<"Capacity : "<<v.capacity()<<endl;

    v.push_back(45);
    cout<<"Capacity : "<<v.capacity()<<endl;

    v.push_back(23);
    cout<<"Capacity : "<<v.capacity()<<endl;
    
    cout<<"Size : "<<v.size()<<endl;

    cout<<"Before pop :"<<endl;
    for(int i:v){
        cout<<i<<"  ";
    }

    v.pop_back();
    cout<<endl<<"After pop :"<<endl;
    for(int i:v){
        cout<<i<<"  ";
    }

    cout<<"\n \nSize : "<<v.size()<<endl;
    cout<<"Index 1 element : "<<v.at(1)<<endl;
    cout<<"Front element is : "<<v.front()<<endl;
    cout<<"Last element is : "<<v.back()<<endl;
    cout<<"Empty or not :  "<<v.empty()<<endl;  // 0 for false (not) and 1 for True (Yes)
    return 0;
}