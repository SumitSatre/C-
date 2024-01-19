#include <iostream>
using namespace std;

class Principle{
    public:
    void greet(){
        cout<<"Hello Teachers and students"<<endl;
    }
};

class Teacher {
    public:
    void greet(){
        cout<<"Hello students"<<endl;
    }
};

class Student : public Principle ,  public Teacher{
    public:
    void greet(){
        Principle :: greet();  
    }
};

int main(){
    Student Sumit;
    Sumit.greet();
    return 0;
}

/* Amibuguity resolution : In the multiple inheritance this happence to resolve this make a same name
 function in the derived class and state that which function you want to use.
 Syntax:
    void function(){
        class_name :: function();  
    }

*/