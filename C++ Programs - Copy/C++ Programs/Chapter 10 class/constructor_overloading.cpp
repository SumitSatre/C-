/*In constructor overloading : We can have more than one constructor in a same class with same 
name, ,as long as each has different list of arguments   */

#include <iostream>
#include <string>
using namespace std;

class add{
    
    public:
    
    add(int a , int b=4 ){
        cout<<"Addition of 2 integers is "<<a+b<<endl;
    }
    add(int a , int b, int c ){
        cout<<"Addition of 3 integers is "<<a+b+c<<endl;
    }
    add(int a , int b , int c , float d){
        cout<<"Addition of 4 integers is "<<a+b+c+d<<endl;
    }
};

int main(){
    add sumit(4);   // According to the parameters it call the constructor
    add saurabh(4,12,2);

    add s1(4,5,6,1);
    add s2(4,5,6,1.5);

    return 0;
}