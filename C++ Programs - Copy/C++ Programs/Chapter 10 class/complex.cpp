#include <iostream>
#include <string>
using namespace std;

class complex{
    int a ,b;
    public:
    void access(int a1 , int b1 ){
        this->a = a1;
        this->b= b1;
    }
    void display(){
        cout<<"The complex number is "<<a<<"+"<<b<<"i"<<endl;
    }

    void func(complex o1 , complex o2){
        a = o1.a + o2.a;
        b = o1.b + o2.b;
    }
};

int main(){
    complex p , q ,r ,s;
    p.access(5 ,4);
    p.display();

    q.access(3 ,2);
    q.display();

    r.func(p,q);
    r.display();

    p.func(q,r);
    p.display();
    return 0;
}