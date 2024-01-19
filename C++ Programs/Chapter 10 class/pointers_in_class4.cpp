#include <iostream>
using namespace std;

class Base{
    public:
    int c;
    void display(){
        cout<<"Displaying base class variable c : "<<c<<endl;
    }
};

class Derived : public Base{

    public:
    int a , b;
    void display(){
        cout<<"Displaying Derived class variable a : "<<a<<endl;
        cout<<"Displaying Derived class variable b : "<<b<<endl;
        cout<<"Displaying base class variable c : "<<c<<endl; 
    }
};
int main(){
    Base* Pointer_of_Base ;
    Base m;
    Derived n;

    Pointer_of_Base = &m;                    // It can only use the base 
    Pointer_of_Base->c = 10;
    // Pointer_of_Base->b = 20;              // it will trow error 
    Pointer_of_Base->display();
    
    
    Derived* Pointer_of_Derived = &n ;     // It can only use the base 
    Pointer_of_Derived->a = 50;
    Pointer_of_Derived->b = 20;
    Pointer_of_Derived->c = 200;   
    Pointer_of_Derived->display();
    
    return 0;
}