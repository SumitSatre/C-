#include <iostream>
#include <stdio.h>
using namespace std;

int main(){
    int a =12, b = 4;
    int *p=&a , *s=&b;
    s=p;
    *s=19;
    cout<<*p<<endl;
    return 0;
}