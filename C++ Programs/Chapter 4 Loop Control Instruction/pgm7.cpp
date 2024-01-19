/*
   *
  **
 ***
****
****
 ***
  **
   * 

   1
  121
 12321
1234321
*/


#include <iostream>
#include <stdio.h>
using namespace std;

void fun1(int n){

    for(int i = 1; i <= n; i++){

        for(int j = i ; j<n ; j++){
            cout<<" ";
        }

        for(int k = 0 ; k<i ; k++){
            cout<<"*";
        }

        for(int m = 1 ; m<i ; m++){
            cout<<"*";
        }
        cout<<endl;
    }
    
}

void fun2(int n){

    for(int i = 1; i <= n; i++){
        int x =1 , y=i-1;
        for(int j = i ; j<n ; j++){
            cout<<" ";
        }

        for(int k = 0 ; k<i ; k++){
            cout<<x;
            x++;
        }

        for(int m = 1 ; m<i ; m++){
            cout<<y;
            y--;
        }
        cout<<endl;
    }
    
    
}


void fun3(int n){

    for(int i = 1; i <= n; i++){

        for(int j = i ; j<n ; j++){
            cout<<" ";
        }

        for(int k = 0 ; k<i ; k++){
            cout<<"*";
        }
        cout<<endl;
    }

    for(int i = 1; i <= n; i++){

        for(int m = 0 ; m<(i-1) ; m++){
            cout<<" ";
        }

        for(int p = 0 ; p<=(n-i) ; p++){
            cout<<"*";
        }
        cout<<endl;
    }
    
}

int main(){
    int n;
    cout<<"Enter the number : ";
    cin>>n;

    fun1(n);
    cout<<"\n\n";
    fun2(n);
    cout<<"\n\n";
    fun3(n);
    return 0;
}