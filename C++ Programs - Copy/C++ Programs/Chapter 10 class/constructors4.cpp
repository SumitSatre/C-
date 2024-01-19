// This execution for the multilevel inheritance

#include <iostream>
using namespace std;

class Base1{
    public:
    Base1(int a){
        cout<<"This is class Base1"<<endl;
        cout<<"The value of a is "<<a<<endl<<endl;
    }
};

class Base2 : public Base1{
    public:
    Base2(int a ,int b) : Base1(a){
        cout<<"This is class C"<<endl;
        cout<<"The value of b is "<<b<<endl<<endl;
    }
};

class Base3 : public Base2{
    public:
    Base3(int a ,int b , int c) : Base2(a,b){
        cout<<"This is class D"<<endl;
        cout<<"The value of c is "<<c<<endl<<endl;
    }
};

int main(){
    Base3 Sumit(1,2,3);
    return 0;
}
