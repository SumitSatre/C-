/*
*
* *
* * *
* * * *


* * * *
* * *
* *
*

1
1 2
1 2 3 
1 2 3 4

1
2 3
4 5 6
7 8 9 10


*/

#include <iostream>
#include <stdio.h>
using namespace std;

void pattern1();
void pattern2();
void pattern3();
void pattern4();

int main(){
    pattern1();
    cout<<endl;

    pattern2();
    cout<<endl;

    pattern3();
    cout<<endl;

    pattern4();
    cout<<endl;

    return 0;
}

void pattern1(){
    for(int i = 1 ; i<=4 ; i++){
        for(int j = 1 ; j<=i ; j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}

void pattern2(){
    for(int i = 4 ; i>=1 ; i--){
        for(int j=i ; j>=1  ; j--){
            cout<<"* ";
        }
        cout<<endl;
    }
}

void pattern3(){
    
    for(int i = 1 ; i<=4 ; i++){
        int count=1;
        for(int j=i ; j>=1  ; j--){
            cout<<count<<" ";
            count++;
        }
        cout<<endl;
    }
}

void pattern4(){
    int count=1;
    for(int i = 1 ; i<=4 ; i++){
        for(int j=i ; j>=1  ; j--){
            cout<<count<<" ";
            count++;
        }
        cout<<endl;
    }
}