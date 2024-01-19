#include <iostream>
#include <stdio.h>
#include <string>
using namespace std;

int a=5;

int main(){
    int a=123;
    bool b = true;        // if we print b then it returns 1 as it is true
    bool c =false;        // if we print c then it returns o as it is false

    cout<<"The local a is "<<a<<endl;

    cout<<b<<"\n"<<c<<endl;

    cout<<"The global a is "<<::a; // To use the globle variable we can use :: symbol  

    return 0;
}