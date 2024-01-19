//use the arithmetic operators

#include <iostream>
using namespace std;

int main(){
    int a , b , sum, sub, div , mul;

    cout<<"Enter the first value  : ";
    cin>>a;

    cout<<"Enter the second value : ";
    cin>>b;

    cout<<"The addition is "<<a+b<<"\n";
    cout<<"The Substraction is "<<a-b<<"\n";
    cout<<"The Multiplication is "<<a*b<<"\n";
    cout<<"The Division is "<<a/b<<"\n";
    cout<<"The Remainder is "<<a%b<<"\n";

    a=a&3;
    cout<<"The a=a&3 is "<<a<<"\n";

    return 0;
}