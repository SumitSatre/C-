#include <iostream>
using namespace std;

int main(){
    int marks[5];

    for(int i = 0;i<5 ; i++){
        cout<<"Enter the marks of the student "<<i+1<<"  :  ";
        cin>>marks[i];
    }
    cout<<"\n\n";
    
    // we can use here auto which automatically get the datatype of the array
    for(auto i:marks){
        cout<<"The marks of the student are "<<i<<endl;
    }

    return 0;
}