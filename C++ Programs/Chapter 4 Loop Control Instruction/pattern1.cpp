#include <iostream>
#include <stdio.h>
using namespace std;

void func1(int n){
    for(int i = 0 ; i<n ; i++){
        char x = 'A' + i;
        for(int j = 0 ; j<i+1 ; j++){
            cout<<x<<" ";
        }
        cout<<endl;
    }
    cout<<endl<<endl;
}

void func2(int n){
    for(int i = 0 ; i<n ; i++){
        char x = 'A';
        for(int j = 0 ; j<n ; j++){
            x = 'A' + j;
            cout<<x<<" ";
        }
        cout<<endl;
    }
    cout<<endl<<endl;
}

void func3(int n){
    for(int i = 0 ; i<n ; i++){
        char x = 'A'+i;
        for(int j = 0 ; j<n ; j++){
            cout<<x<<" ";
            x = x + 1;
        }
        cout<<endl;
    }
    cout<<endl<<endl;
}

void func4(int n){
    for(int i = 0 ; i<n ; i++){
        char x = 'A'+i;
        for(int j = 0 ; j<i+1 ; j++){
            cout<<x<<" ";
            x = x + 1;
        }
        cout<<endl;
    }
    cout<<endl<<endl;
}

void func5(int n){
    for(int k = n-1 ; k>=0 ; k--){
        char x = 'A'+k;
        for(int j = 0 ; j<n-k ; j++){
            cout<<x<<" ";
            x = x + 1;
        }
        cout<<endl;
    }
    cout<<endl<<endl;
}

void func6(int n){
    for(int i = 0 ; i<n ; i++){

        for(int j = 0 ; j<n-i-1 ; j++){
            cout<<" ";
        }

        for(int k = 0 ; k<i+1 ; k++){
            cout<<"*";
        }
        cout<<endl;
    }
    cout<<endl<<endl;
}

void func7(int n){
    for(int i = 0 ; i<n ; i++){

        for(int j = 0 ; j<i ; j++){
            cout<<" ";
        }

        for(int k = n-i ; k>=1 ; k--){
            cout<<"*";
        }
        cout<<endl;
    }
    cout<<endl<<endl;
}


void func8(int n){
    for(int i = 0 ; i<n ; i++){

        for(int j = 0 ; j<n-i-1 ; j++){
            cout<<" ";
        }

        for(int k = 0 ; k<i+1 ; k++){
            cout<<"*";
        }

        for(int p = 0 ; p<i ; p++){
            cout<<"*";
        }
        cout<<endl;
    }
    cout<<endl<<endl;
}

void func9(int n){
    for(int i = 0 ; i<n ; i++){

        int x = 1;

        for(int j = 0 ; j<n-i ; j++){
            cout<<x<<" ";
            x++;
        }

        for(int k = 0 ; k<i ; k++){
            cout<<"*"<<" ";
        }

        for(int p = 0 ; p<i ; p++){
            cout<<"*"<<" ";
        }

        int y = n-i;
        for(int p = 0 ; p<n-i ; p++){
            cout<<y<<" ";
            y--;
        }
        cout<<endl;
    }
    cout<<endl<<endl;
}


int main(){
    cout<<"Enter the number : ";
    int n;
    cin>>n;

    func1(n);
    func2(n);
    func3(n);
    func4(n);
    func5(n);

    func6(n);
    func7(n);
    func8(n);
    func9(n);
    return 0;
}