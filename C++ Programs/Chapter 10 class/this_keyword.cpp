#include <iostream>
#include <stdio.h>
using namespace std;

class Student{

private:
    string name;

public:
    Student()
    {
        cout << "Address of this object : " << this << endl;
    }

    void setName(string name)
    {
        this->name = name;
    }

    void getName()
    {
        cout << "name is : " << (*this).name << endl;  //  (*this).name == this->name
    }
};

int main(){
    Student s1;

    s1.setName("Sumit");
    s1.getName();

    cout << "Address of s1 : " << &s1 << endl;
    return 0;
}