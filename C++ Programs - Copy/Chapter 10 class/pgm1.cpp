#include <iostream>
#include <string>
using namespace std;

class Employee{
    private:
    string  location;

    public:
    string name ;
    int salary;
    void access(){
        cout<<"Enter the Employee name:";
		cin>>name;

        cout<<"Enter the employe location : ";
        cin>>location;

        cout<<"Enter salary of the employee : ";        
        cin>>salary;
    }

    void display();
};

void Employee :: display(){
    cout<<"\nThe Employee name is "<<name<<endl;
    cout<<"The Employee location is "<<location<<endl;
    cout<<"The Employee salary is "<<salary<<endl;
}

int main(){
    Employee e1 , e2;

    e1.access();
    e1.salary = 1234;
    e1.display();

    e2.access();
    e2.display();
    return 0;
}