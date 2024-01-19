// Multiple inheritance : A derived class with more than one base class ( 2 baap )


#include <iostream>
using namespace std;

class Principle{
    public:
    Principle(){
        cout<<"I am the principle of the school ."<<endl;
    }
};

class Teacher{
    public:
    Teacher(){
        cout<<"I am the teacher of the school "<<endl;
    }
};

class Student :  public Principle , public Teacher{
    public:
    Student(){
        cout<<"I am the student of the school "<<endl;
    }
};

int main(){
    Student Sumit;
    return 0;
}