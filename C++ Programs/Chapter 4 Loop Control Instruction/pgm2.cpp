// Fibonacci series = 0  1  1  2  3  5  8  13  21  34  55 ........

#include <iostream>
using namespace std;

int main(){
    int a=0 ,b=1 ,c=0,i=1 ,n;

    cout<<"Enter the number : ";
    cin>>n;

    for( ; i<=n ; i++){
        cout<<c<<"\t";
        c=b+a;
        b=a;
        a=c;

    }
    return 0;
}