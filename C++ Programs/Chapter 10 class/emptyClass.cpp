#include <iostream>
#include <stdio.h>
using namespace std;

class Hero{
    // empty class
};

class Villan{
    int s;
    int p;
    char m;
};

int main(){
    Hero h;
    cout<<sizeof(h)<<endl;  // empty class size is always 1

    Villan v;
    cout<<sizeof(v)<<endl;    
    return 0;
}
