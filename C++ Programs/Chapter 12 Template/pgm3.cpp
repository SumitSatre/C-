// class template with multiple parameters (comma separated) and with default data types

#include <iostream>
using namespace std;
template <class T1=int , class T2=string> 

class myclass{
    public:
    T1 data1;
    T2 data2;

    myclass(T1 a , T2 b){
        data1 = a;
        data2 = b;
    }
    void display(){
        cout<<data1<<endl
            <<data2<<endl;
    }
};
int main(){
    // here what data we want for our code we can decide
    myclass obj(38 , "Sumit");  
    obj.display(); 
    return 0;
}
