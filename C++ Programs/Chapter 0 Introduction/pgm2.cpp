#include <iostream>
#include <string>
using namespace std;

struct student_data{
    string name;
    int roll_no;
    int SGPA;
};



int main(){
    cout<<"Hello World";
    int i=0;
    struct student_data s[15];

    for(int i=0 ; i<15 ; i++){
            cout<<"Enter the name of the student "<<i+1<<" : "<<endl;
            cin>>s[i].name;
            
            cout<<"Enter the name of the student "<<i+1<<" : "<<endl;
            cin>>s[i].roll_no;

            cout<<"Enter the name of the student "<<i+1<<" : "<<endl;
            cin>>s[i].SGPA;
    return 0;
}