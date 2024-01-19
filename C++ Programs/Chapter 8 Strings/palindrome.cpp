#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;

int palindrome(char a[] , char b[]){
    for( int i = 0 ; b[i]!='\0' ; i++){
        if(b[i]!=a[i]){
            return 0;
        }
    }
    return 1;
}

int Size(char b[]){
    int size = 0;
    for( int i = 0 ; b[i]!='\0' ; i++){
        size++;
    }
    return size;
}

void reverse(char b[] , int size){
    int n = size / 2;

    for( int i = 0 ; i<n ; i++){
        swap(b[i] , b[size-1]);
        size--;
    }
}

int main(){
    char b[15] = "noon";
    char a[20];
    strcpy(a,b);

    int size = Size(b);

    reverse(b , size);

    int x = palindrome(a,b);
    
    if(x==1){
        cout<<"palindrome";
    }
    else{
        cout<<"Not palindrome";
    }

    return 0;
}