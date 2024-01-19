// Friend function used for function

#include <iostream>
#include <string>
using namespace std;

class c2;

class c1{
    int val1;

    public:
    void setnumber(int a){
        val1 = a;
    }

    void display(){
        cout<<"This is the value of class c1 : "<<val1<<endl;
    }
    friend void swap(c1 &x , c2 &y);
};


class c2{
    int val2;

    public:
    void setnumber(int a){
        val2 = a;
    }

    void display(){
        cout<<"This is the value of class c2 : "<<val2<<endl;
    }
    friend void swap(c1 &x , c2 &y);
};

void swap(c1 &x , c2 &y){
    int temp;
    temp = y.val2;
    y.val2 = x.val1 ;
    x.val1 = temp;
}

int main(){
    c1 p;
    c2 q;

    p.setnumber(9);
    p.display();

    q.setnumber(5);
    q.display();

    swap(p , q);
    p.display();
    q.display();
    return 0;
}