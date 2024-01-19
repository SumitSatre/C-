#include <iostream>
#include<string>
using namespace std;

int main(){
    int a;
    cout<<"Enter the Number : ";
    cin>>a;

    switch(a%2!=0){
        case 0:
            cout<<a<<" is even number";
            break;
        case 1:
            cout<<a<<" is odd number";
    }
    return 0;
}