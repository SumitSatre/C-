/* Here we can use switch case as the if and else. To use this first we want to give condition to switch
 case then if condition is true it will return 1 and if false it will return 0. */

 #include <iostream>
 #include <stdio.h>
 using namespace std;
 
 int main(){
    int a;
    cout<<"Enter the value : ";
    cin>>a;

    switch(a>=18){
        case 1:
            cout<<"You are eligile for voting"<<endl;
            break;

        case 0:
            cout<<"You are Not eligile for voting"<<endl;
            break;
    }
    return 0;
 }
