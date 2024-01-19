#include <iostream>
using namespace std;

class Base{
    int a;
    int b;

    public:
    /* Base(int i , int j) : b(j) , a(b+j) --> This gives us a garbage value because initiallisation must be in the
                                    order we declared a first then b so here also we want to write a first then b   */
    // Base(int i , int j) : a(i) , b(i+j)
    // Base(int i , int j) : a(i) , b(a+j)
    Base(int i , int j) : a(i) , b(j)
    {
        cout<<"The value of a is "<<a<<endl;
        cout<<"The value of b is "<<b<<endl;
    }
};

int main(){
    Base sumit(10,15);
    return 0;
}