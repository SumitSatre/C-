// protected : It is like private class just difference is it can be inherited
// Hierarchical inheritance : Several derived classes with single base class  ( 1 baap )

#include <iostream>
using namespace std;

static int count = 1;

class base{
    private:
    int a=10;

    protected:
    int b=20;
    

    public:
    int c=30;
    base(){
        cout<<"Hi , my name is Sumit "<<count<<endl;
        count++;
    }
};

class derived1 : public base{
    public:
    void setdata(){
        b = 70;
        c = 71 ;
        cout<<b<<endl;
        cout<<c<<endl;
    }
};

class derived2 : private base{
    public:
    void setdata(){
        b = 80;
        c = 81;
        cout<<b<<endl;
        cout<<c<<endl;
    }
};

class derived3 : protected base{
    public:
    void setdata(){
        b = 90;
        c = 91;
        cout<<b<<endl;
        cout<<c<<endl;
    }
};

int main(){
    derived1 d1;
    d1.setdata();

    derived2 d2;
    d2.setdata();

    derived3 d3;
    d3.setdata();
    return 0;
}