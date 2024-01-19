// Single inheritance : A derived class with only one base class

#include <iostream>
using namespace std;

class Employee{
    private:
    int a;
    public:
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

class Programmer : private Employee{ 
    /* If we use here private than the public members of the base class becomes 
      Then the public members of the base class we cannot use in the main class it only 
      use in the derived 
      but the members in the public part of the base class we can use in the derived class 
    */
    public:
    int id;

    void get(){
        access();
        cout<<"Enter the id : ";
        cin>>id;  
        display();  
        // a=10;  it gives error because it is declared in private 
    } 
};

void Employee :: display(){
    cout<<"\nThe Employee name is "<<name<<endl;
    cout<<"The Employee salary is "<<salary<<endl;
}

int main(){
    Programmer p1;
    // p1.access();
    p1.get();   
   // p1.display();
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

