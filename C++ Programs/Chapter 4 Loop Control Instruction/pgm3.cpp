/* 1.Create function for the following pattern :
1 2 3 
4 5 6 
7 8 9 


*/

#include <iostream>
#include <stdio.h>
using namespace std;

void func1(int n){
    int k = 0 ;

    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j<n ; j++){
            k++;
            cout<<k<<" ";
        }
        cout<<endl;
    }
    
}

void func2(int n){
    int k = n*n ;

    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j<n ; j++){
            cout<<k<<" ";
            k--;
        }
        cout<<endl;
    }
    
}

int main(){
    int n;
    cout<<"Enter the number : ";
    cin>>n;

    func1(n);

    cout<<endl;

    func2(n);
    return 0;
}

