#include <iostream>
#include <stdio.h>
using namespace std;

void swapp(int* x , int* y){
    int c;
    c = *x;
    *x = *y;
    *y = c;   
}

int main(){
    int arr[] = {1,2,3,4,5,6,7,8,9,10,11,12,13};

    int n = sizeof(arr) / sizeof(int);
    
    for(int i=0 ; i<(n/2) ; i++){
        swapp(&arr[i] , &arr[n-1]);
        n--;
    }

    for(auto i:arr){
        cout<<i<<"  ";
    }

    return 0;
}