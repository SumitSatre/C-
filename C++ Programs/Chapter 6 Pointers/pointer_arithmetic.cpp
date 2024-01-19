#include <iostream>
#include <stdio.h>
using namespace std;

int main(){
    int i = 5;
    int *a = &i;

    cout<<"Before a++ : "<<a<<endl;
    a++;
    cout<<"After a++ : "<<a<<endl;
    cout<<"After : "<<*a<<endl;//It gives garbage value cause the address does not point to any number

    

    return 0;
}