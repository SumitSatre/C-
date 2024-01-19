// Friend function used for function

#include <iostream>
#include <string>
using namespace std;

class complex{
    int a ,b;
    public:
    friend complex func(complex o1 , complex o2);
    void access(int a1 , int b1 ){
        a = a1;
        b= b1;
    }
    void display(){
        cout<<"The complex number is "<<a<<"+"<<b<<"i"<<endl;
    }
};

complex func(complex o1 , complex o2){
    complex a ;
    a.access((o1.a + o2.a) , (o1.b + o2.b));
    a.display();
    cout<<"sumit"; 
    return a;
}

int  main(){
    complex p , q ,sum;
    p.access(5 ,4);
    p.display();

    q.access(3 ,2);
    q.display();

    sum = func(p,q);
    

    return 0;
}
