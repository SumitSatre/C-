// If we write any function on the private part of the class it only accessible to within the class

#include <iostream>
#include <string>
using namespace std;

class Employee{

    protected:
    string  location;
    string name ;
    int salary;
    void add(int a , int b){
        cout<<"The additon is "<<a+b<<endl;
    }

    private:
    void display(){
    cout<<"\nThe Employee name is "<<name<<endl;
    cout<<"The Employee location is "<<location<<endl;
    cout<<"The Employee salary is "<<salary<<endl;
    }

    public:
    void access(){
        cout<<"Enter the Employee name:";
		cin>>name;

        cout<<"Enter the employe location : ";
        cin>>location;

        cout<<"Enter salary of the employee : ";        
        cin>>salary;

        display();   // The function written in the private part only accessible under that class
        add(5,4);
    }

};

class Google : public Employee{

};

int main(){
    Employee e1 , e2;

    e1.access();
    return 0;
}
