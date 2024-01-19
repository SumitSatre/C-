#include <iostream>
#include<string>
using namespace std;

int main(){
    int a;
    cout<<"Enter the Number : ";
    cin>>a;

    switch(a){
        case 1:
            cout<<"Monday\n";
        case 2:
            cout<<"Tuesday\n";
        case 3:
            cout<<"Wednesday\n";
        case 4:
            cout<<"Thursday\n";
        case 5:
            cout<<"Friday\n";
        case 6:
            cout<<"saturday\n";
        case 7:
            cout<<"Sunday\n";
            break;
        
    }
    return 0;
}