#include <iostream>
#include <stdio.h>
using namespace std;

void swapp(int* x , int* y){
    int c;
    c = *x;
    *x = *y;
    *y = c;   
}

int func(int arr[] , int n ){

    int count[n];

    for(int i = 0 ; i<n ; i++){
        int x=1;
        for(int j = i+1 ; j<n ; j++){
            if(arr[i]==arr[j] ){
            x++;
            }
        }
        count[i]=x;
    }
    for(auto i:count){
        cout<<i<<"  ";
    }

    for(int j =0 ; j<n ; j++){

        for(int k =j+1 ; k<3 ; k++){
            if(count[j]==count[k]){
                return 0;
            }
        }
    }
    return 1;
}

void func1(int arr[] , int n){
    int str[n];

    for(int i = 1 ; i<n ; i++){
        int index = i-1;
        for(int j=i-1 ; j>=0 ; j--){
            if(arr[i]!=arr[j]){
            str[i-1] = arr[i];
        }
        }
    }

    for(auto i:str){
        cout<<i<<"  ";
    }
}

int main(){
    int arr[] = {1,2,3,2,2,3,3,3};
    func1(arr , 9);
    int x = func(arr , 9);
    if(x==1){
        cout<<"\nThe array has unique number occurrence : True"<<endl;
    }
    else{
        cout<<"The array has unique number occurrence : False"<<endl;
    }
    return 0;
}