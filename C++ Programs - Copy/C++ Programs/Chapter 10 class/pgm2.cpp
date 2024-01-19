#include <iostream>
#include <string>
using namespace std;

class Employee{
    private:
    string name;
    string location;

    public:
    int salary;
    void access(void);
    void display();
};
void Employee :: access(void){
        cout<<"Enter the Employee name: \n";
		getline(cin , name);

        cout<<"Enter the employe location : ";
        getline(cin , location);
        cout<<endl;

        cout<<"Enter salary of the employee : ";
        cin>>salary;
}

void Employee :: display(){
    cout<<"\nThe Employee name is "<<name<<endl;
    cout<<"The Employee location is "<<location<<endl;
    cout<<"The Employee salary is "<<salary<<endl;
}

int main(){
    Employee e1 , e2;

    e1.access();
    e1.display();
    cout<<"\n";

    e2.access();
    e2.display();

    return 0;
}