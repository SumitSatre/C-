#include <iostream>
#include <stdio.h>
using namespace std;

class Student{
    private :
    string name ;

    public:

    void setName(string name ){
        this->name = name;
    }

    void getName(){
        cout<<"name is : "<<this->name<<endl;
    }
};

int main(){
    Student s1;

    s1.setName("Sumit");
    s1.getName();

    /* In class we cannot access private datatypes or functions directly so we can use 
    getters and setters to access or set them */
    return 0;
}