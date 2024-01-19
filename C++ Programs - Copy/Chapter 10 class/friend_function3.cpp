// Friend function used for class

#include <iostream>
#include <string>
using namespace std;

class complex;

class calculator{
    
    int p,q;
    public:
    int func1(complex  , complex );

    int func2(complex  , complex );

    int func3(int , int );
};

class complex{
    int a , b ;


    public:
//  friend class calculator;        // It gives the access of all functions to the that declared class
    friend int calculator :: func1(complex  , complex );
    friend int calculator :: func2(complex  , complex );              

    void setnumber(int a1, int b1){
        a=a1;
        b=b1;
    }

    void display(){
        cout<<"The complex number is "<<a<<"+"<<b<<"i"<<endl;
    }
};

int calculator ::  func1(complex p , complex q){
        return (p.a + q.a);
    }

int calculator ::  func2(complex p , complex q){
        return (p.b + q.b);
    }

int calculator ::  func3(int x , int y ){
    complex harry;
    cout<<endl;
    harry.setnumber(x,y);
    harry.display();
    return 0;
}

int main(){
    complex i , j;
    calculator sumit ;

    i.setnumber(4,7);
    i.display();

    j.setnumber(3,9);
    j.display();

    cout<<"The real part of the complex number is "<<sumit.func1(i , j)<<endl;
    cout<<"The complex part of the complex number is "<<sumit.func2(i , j)<<endl;
    sumit.func3(10,12 );
    return 0;
}

/* If we want use the functions of the class in the another class function we can use it but if we want to
use the datatypes of the another class we want to declare the friend function e.g. func3()

there are two ways of declaring friend function :
1)  friend int class_name_of_function :: func1();
  In this type the friend class B only one declared function can use the class A

2) friend class class_name; 
  In this type the friend class B all functions use the class A


  */