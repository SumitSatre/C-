// parameterized constructor

#include <iostream>
#include <string>
using namespace std;

class complex{
    int a ,b;
    public:
    
    // if we not give any argument in the object to the consructor then it will use default arguments
    complex(int a=23 , int b=9 ){   
        cout<<"The complex number is "<<a<<"+"<<b<<"i"<<endl;
    }
};

int main(){
    // Implicit call
    complex p;
    
    // Explicit call
    complex q = complex(10,12);
    return 0;
}