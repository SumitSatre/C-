#include <iostream>
using namespace std;

class Base{
    public:
    int c=30;
    /* Here we used the virtual fuction hence the base class pointer to the derived class use the 
    display funtion of the Derived class     */
    virtual void display(){
        cout<<"1 Displaying base class variable c : "<<c<<endl;
    }

    Base(){
        cout<<"1 Hello Sumit"<<endl;
        cout<<"1 Hello World"<<endl<<endl;
    }
    virtual void add(){}
};

class Derived : public Base{

    public:
    int a=10 , b=20;

    Derived(){
        cout<<"2 Hello Sumit"<<endl;
    }

    void display(){
        cout<<"2 Displaying Derived class variable a : "<<a<<endl;
        cout<<"2 Displaying Derived class variable b : "<<b<<endl;
        cout<<"2 Displaying base class variable c : "<<c<<endl; 
    }

    void add(){
        cout<< "The addition is "<<a+b<<endl;
    }
};


int main(){
    Base* Pointer_of_Base ;
    Derived n;

    Pointer_of_Base = &n;                    // It can only use the base 
    // Pointer_of_Base->b = 20;              // it will trow error 
    Pointer_of_Base->display();
    Pointer_of_Base->add();      // We cannot use the functions of the derived class 
    // but if we want to use we can make same name function in base class with virtual keyword

    return 0;
}