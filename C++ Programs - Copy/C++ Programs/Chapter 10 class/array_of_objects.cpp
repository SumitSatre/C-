#include <iostream>
using namespace std;

class Employee{
    string name ;
    int a;
    public:

    int salary;
    void access(int i){
        cout<<"Enter the name of Employee "<<i+1<<" : ";
		cin>>name;
        cout<<"Enter the salary of Employee "<<i+1<<" :";    
        cin>>salary;
        a= i;
    }

    // Destructor is created
    ~Employee(){
        cout<<"\nThe name of Employee "<<a+1<<" is "<<name<<endl;
        cout<<"The salary of Employee "<<a+1<<" is "<<salary<<endl;
        a--;
    }                                      
};

int main(){
    int n;
    cout<<"Enter the number of the employee : ";        
    cin>>n;
    Employee e[n];

    for(int i=0 ; i<n ; i++){
        e[i].access(i);
        cout<<endl;
    }
    return 0;
}