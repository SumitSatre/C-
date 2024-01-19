#include <iostream>
using namespace std;

void pattern2(int n);

int main(){
    int n = 0;
    cout<<"Enter the number :  ";
    cin>>n;

    pattern2(n);

    return 0;
}


void pattern1(int n){

    int i = 0 ,j =0;

    while(i<n){
        while(j<n){
            cout<<j+1<<" ";
            j++;
        }
        i++;
        j=0;
        cout<<endl;
    }
}

void pattern2(int n){

    char k = 0;

    for (int i = 0 ; i<n ; i++){
        for(int j= 0 ; j<i+1 ; j++ , k++ ){
            cout<< ('A'+k) <<" ";
        }
        cout<<endl;
    }
}