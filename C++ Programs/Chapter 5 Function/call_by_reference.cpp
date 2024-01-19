// Call By address by using Pointers

#include <iostream>
#include <string>
using namespace std;

void swapp(int &x , int &y);

int main(){
    int a ,b ;
    cout<<"Enter the first value  : "; 
    cin>>a;
    cout<<"Enter the second value : ";
    cin>>b;

    swapp(a ,b);
    cout<<"After the swap value of a is "<<a<<endl;
    cout<<"After the swap value of b is "<<b<<endl;

    return 0;
}

void swapp(int &x , int &y){
    int c;
    c = x;
    x = y;
    y = c;   
}