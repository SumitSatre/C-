// Fibonacci Series 0 1  1  2  3  5  8  13  21  34 ......

#include <iostream>
#include <string>
using namespace std;

int main(){
    int a=1 , b=0 ,n ,i;

    cout<<"Enter the number : ";
    cin>>n;

    for(int i=0 ; i<n ; i++){
        static int c = 0;       // static is the variable which only executes one time
        cout<<c<<"\t";
        c = a+b; 
        a=b;
        b=c;
    }
    return 0;
}