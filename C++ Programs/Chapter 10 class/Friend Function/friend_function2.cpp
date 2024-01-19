// Friend function used for function

#include <iostream>    
#include <string>
using namespace std;

class calculator{
    int a , b ;

    public:
    friend calculator mul(int c , int d);
    // int mul1(int c , int d);
    void add(int c , int d){
        a = c;
        b = d;
        cout<<"The addition is "<<a+b<<endl;
    }

    void sub(int c , int d){
        cout<<"The addition is "<<c-d<<endl;
    }

    void div(int c , int d){
        cout<<"The division is "<<c/d<<endl;
    }
};

calculator mul(int c , int d){
    calculator a;
    cout<<"The Multiplication is "<<c*d<<endl;
    return a;
}

int mul1(int c , int d){
    calculator a;
    a.div(10 , 5);
    cout<<"The Multiplication is "<<c*d<<endl;
    return 0;
}

int main(){
    int p=6, q=3 ;
    calculator sumit;
    sumit.add(p,q);
    sumit.sub(p,q);
    sumit.div(p,q);

    sumit = mul(p,q);  // There is difference in the declaration of friend function 
    mul1(5,5);
    return 0;
}