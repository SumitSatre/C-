// Using recursion find factorial 5  4  3  2  1

#include <iostream>
#include <string>
using namespace std;

int fact(int n);

int main(){
    int a ;
    cout<<"Enter the value of a : ";
    cin>>a;

    cout<<"The factorial is "<<fact(a);
    return 0;
}

int fact(int n){
    if(n<=1){
        return 1;
    }
    return n  * fact(n-1);
}