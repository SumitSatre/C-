#include <iostream>
using namespace std;

struct Employee{
    string name;
    int salary;
    int id;
};

int main(){
    int n;
    cout<<"Enter the number : ";
    cin>>n;

    struct Employee e[n];

    for(int i=0 ; i<n ; i++){
        cout<<"Enter the name : ";
        cin>>e[i].name;

        cout<<"Enter the salary : ";
        cin>>e[i].salary;

        cout<<"Enter the id : ";
        cin>>e[i].id;

        cout<<e[i].name<<endl;
        cout<<e[i].salary<<endl;
        cout<<e[i].id<<endl<<endl;;
    }


    return 0;
}