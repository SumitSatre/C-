// Multilevel inheritance : Deriving class from already derived class   ( A ---> B ---> C)

#include <iostream>
using namespace std;

class Principle{
    public:
    Principle(){
        cout<<"I am the principle of the school ."<<endl;
    }
    void greet(){
        cout<<"Hello Teachers and students"<<endl;
    }
};

class Teacher : public Principle{
    public:
    Teacher(){
        cout<<"I am the teacher of the school "<<endl;
    }
    void greet(){
        cout<<"Hello students"<<endl;
    }
};

class Student : public Teacher{
    public:
    Student(){
        cout<<"I am the student of the school "<<endl;
    }
};

int main(){
    Student Sumit;
    Sumit.greet();
    return 0;
}