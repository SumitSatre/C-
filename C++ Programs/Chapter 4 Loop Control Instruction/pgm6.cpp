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

        for(int k = 1 , space = n-i ; k<=space ; k++){
            cout<<" ";
        }

        for(int j = 1; j <= i ; j++){
            cout<<"*";
        }
        cout<<endl;
    }
    
}

void func2(int n){

    for(int i = 1 ; i <= n ; i++){

        for(int k = 2 , space = i ; k<=space ; k++){
            cout<<" ";
        }

        for(int j = 1 ; j <= n-i+1 ; j++){
            cout<<"*";
        }
        cout<<endl;
    }
    
}
void func3(int n){

    for(int i = 1 ; i <= n ; i++){

        for(int k = 1 , space = n-i ; k<=space ; k++){
            cout<<" ";
        }

        int x = 1;
        for(int j = 1; j <= i-1 ; j++){
            
            cout<<x;
            x++;
        }

        int y=i;
        for(int w = 1; w <= i ; w++){
            cout<<y;
            y--;
        }

        cout<<endl;
    }
    
}

int main(){
    int n;
    cout<<"Enter the number : ";
    cin>>n;

    func1(n);
    func2(n);
    func3(n);
    return 0;
}

