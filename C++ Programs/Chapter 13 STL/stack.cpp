#include <iostream>
#include <stdio.h>
#include <stack>
using namespace std;

int main(){
    stack <int> d;

    d.push(3);
    d.push(8);
    d.push(9);
    d.push(54);
    
    cout<<"Size : "<<d.size()<<endl;
    cout<<"Top : "<<d.top()<<endl;

    d.pop();
    cout<<"After pop Top : "<<d.top()<<endl;
    cout<<"Empty or not :  "<<d.empty()<<endl;

    return 0;
} 

