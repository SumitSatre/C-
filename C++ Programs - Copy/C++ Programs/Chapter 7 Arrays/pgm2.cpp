#include <iostream>
using namespace std;

int main(){
    int marks[5];

    for(int i = 0;i<5 ; i++){
        cout<<"Enter the marks of the student "<<i+1<<"  :  ";
        cin>>marks[i];
    }
    cout<<"\n\n";
    
    for(int i = 0;i<5 ; i++){
        cout<<"The marks of the student "<<i+1<<" are "<<marks[i]<<endl;
    }
    return 0;
}