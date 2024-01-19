// Single inheritance : A derived class with only one base class

#include <iostream>
using namespace std;

class Employee{
    protected:      // It can be inherited but cannot used in the main function.
    int z=10;
    private:           // It can not inherit

    public:              // It easily inherit in main class also and inherited class
    string name ;
    int salary;
    void access(){
        cout<<"Enter the Employee name:";
		cin>>name;

        cout<<"Enter salary of the employee : ";        
        cin>>salary;
        

    }

    void display();
};

class Programmer : public Employee{
    
    public:
    int z=1000;
    int id;
    void get(){
        cout<<"Enter the id : ";
        cin>>id;
        name = "satre";         // We also can chnage the variable of parent function 
        cout<<z<<endl;
        display();
    }
              
};

void Employee :: display(){
    cout<<"\nThe Employee name is "<<name<<endl;
    cout<<"The Employee salary is "<<salary<<endl;
}

int main(){
    Programmer p1;
    p1.access();
    p1.get();   
    return 0;
}


/*                    public deviation             private deviation              protected deviation
   
public                  public                        protected                     protected
private                 private                        private                      private
protected               protected                     protected                     protected


protected :  It can inherit but cannot used in the main function.
private   :  It can not inherit
Public    :  It easily inherit in main class also and inherited class

*/