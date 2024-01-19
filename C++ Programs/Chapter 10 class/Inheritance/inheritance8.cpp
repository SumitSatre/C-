#include <iostream>
using namespace std;

class A{
    public:
    A(){
        cout<<"This is class A"<<endl;
    }
};

class B : virtual public A{
    public:
    B(){
        cout<<"This is class B"<<endl;
    }
};

class C : virtual public A{
    public:
    C(){
        cout<<"This is class C"<<endl;
    }
};

class D : public B ,  public C{
    public:
    D(){
        cout<<"This is class D"<<endl;
    }
};

int main(){
    D Sumit;
    return 0;
}

/* 
Amibuguity resolution : In the multilevel inheritance class A appears two times in the class B
 and C student to resolve this ambiguity here we can use virtual keyword.
After using the virtual keyword the system run the class only once .

*/