#include <iostream>
#include <string>
using namespace std;

class Employee{
    private:
    string name ;
    int salary;

    public:
    
    Employee(){
        cout<<"Enter the Employee name:";
		cin>>name;

        cout<<"Enter salary of the employee : ";        
        cin>>salary;

        cout<<"\nThe Employee name is "<<name<<endl;
        cout<<"The Employee salary is "<<salary<<endl;
        cout<<"\n\n";
    }
    
};


int main(){
    Employee e1 , e2;

    return 0;
}

// If we write constructor at any position it invoks first then the other functions