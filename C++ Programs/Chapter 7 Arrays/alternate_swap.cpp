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
    int arr[] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14};

    int n = sizeof(arr) / sizeof(int) , i = 0 ;
    
    for(int k=0 ; k<(n/2) ; k++){
        swapp(&arr[i] , &arr[i+1]);
        i = i+2 ;
    }

    for(auto i:arr){
        cout<<i<<"  ";
    }

    return 0;
}