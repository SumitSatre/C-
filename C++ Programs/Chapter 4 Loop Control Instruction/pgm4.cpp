/* 1.Create function for the following pattern :
1 2 3 
4 5 6 
7 8 9 


*/

#include <iostream>
#include <stdio.h>
using namespace std;

void func1(int n){

    for(int i = 1 ; i <= n ; i++){
        for(int j = 0 ; j<i ; j++){
            cout<<"* ";
        }
        cout<<endl;
    }
    cout<<endl;
}

void func2(int n){
    

    for(int i = 1 ; i <= n ; i++){
        int k = 0;
        for(int j = 0 ; j<i ; j++){
            k++;
            cout<<k<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
}

void func3(int n){
    int k = 0;

    for(int i = 1 ; i <= n ; i++){
        for(int j = 0 ; j<i ; j++){
            k++;
            cout<<k<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
}
void func4(int n){

    for(int i = 1 ; i <= n ; i++){
        for(int j = 0 ; j<i ; j++){
            cout<<i+j<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
}

void func5(int n){

    for(int i = 1 ; i <= n ; i++){
        int k = i;
        for(int j = 0 ; j<i ; j++){
            cout<<k<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
}

int main(){
    int n;
    cout<<"Enter the number : ";
    cin>>n;

    func1(n);
    func2(n);
    func3(n);
    func4(n);
    func5(n);
    return 0;
}

