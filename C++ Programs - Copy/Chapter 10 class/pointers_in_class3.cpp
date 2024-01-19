#include <iostream>
using namespace std;

class complex{
    int a ,b;
    public:
    void access(int a1 , int b1 ){
        a = a1;
        b= b1;
    }
    void display(){
        static int count = 1;
        cout<<"The real part is "<<a<<endl;
        cout<<"The complex   part is "<<b<<endl;
        cout<<"The complex number of object "<<count<<" is "<<a<<" + "<<b<<"i"<<endl;
        count++;
    }
};

int main(){
    // array of objects
    int size;
    cout<<"Enter the size of array : ";
    cin>>size;

    complex* p = new complex[size];
    complex* ptrtemp = p;

    for(int i=0 ,a ,b ; i<size ; i++){
        cout<<"Enter the object "<<i+1<<" first Number : ";
        cin>>a;
        cout<<"Enter the object "<<i+1<<" second Number  : ";
        cin>>b;
        (p+i)->access(a,b);
    }

    for(int i=0 ,a ,b ; i<size ; i++){
        (ptrtemp+i)->display();
        cout<<endl;
    }

    return 0;
}

/*
There are two methods to create the object by the pointer method 
1)  complex* p = new complex;    or       complex* p = new complex[size];

2) complex obj;
   complex* p = &obj;

*/