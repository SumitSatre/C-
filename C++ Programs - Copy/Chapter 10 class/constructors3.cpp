/*

case 1:
class C : public A{
    // Order of execution of contructor : first class A --> class C 
};

case 2:
class C : public A , public B{
    // Order of execution of contructor : first class A --> class B --> class C 
};

case 3:
class C : public A , virtual public B{
    // Order of execution of contructor : first class B --> class A --> class C 
};

*/

// This execution for the multiple inheritance

#include <iostream>
using namespace std;

class Base1 {
    public:
    Base1(int a){
        cout<<"This is class Base1"<<endl;
        cout<<"The value of a is "<<a<<endl;
    }
};

class Base2{
    public:
    Base2(int b){
        cout<<"This is class C"<<endl;
        cout<<"The value of b is "<<b<<endl;
    }
};

class Derived : public Base1 ,  public Base2{
    public:
    Derived(int a ,int b , int c) : Base1(a) , Base2(b){
        cout<<"This is class D"<<endl;
        cout<<"The value of c is "<<c<<endl;
    }
};

int main(){
    Derived Sumit(1,2,3);
    return 0;
}
