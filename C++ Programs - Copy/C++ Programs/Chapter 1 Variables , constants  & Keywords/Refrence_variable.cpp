// ********** Reference Variable ***********
// Sumit---> Sumya------>Coder
// Names Differnt but similar person

#include <iostream>
#include <stdio.h>
#include <string>
using namespace std;

int main(){
    float x=34;
    float &y = x;

    cout<<x<<endl;
    cout<<y<<endl;
    cout<<&x<<endl;
    cout<<&y<<endl;

    y=90;
    cout<<y<<endl;
    return 0;
}