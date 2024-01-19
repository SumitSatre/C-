#include <iostream>
#include <stdio.h>
#include <queue>
using namespace std;

int main(){
    queue <int> d;

    d.push(3);
    d.push(8);
    d.push(9);
    d.push(54);
    
    cout<<"Size : "<<d.size()<<endl;
    cout<<"front : "<<d.front()<<endl;

    d.pop();
    cout<<"After pop front : "<<d.front()<<endl;
    cout<<"Empty or not :  "<<d.empty()<<endl;

    return 0;
} 

// Queue : First in First out 