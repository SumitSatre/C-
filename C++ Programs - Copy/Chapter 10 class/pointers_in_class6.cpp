#include <iostream>
using namespace std;

class School{
    protected:
    int id;

    public:
    School(int i){
        id = i;
    }
    
    // if we write virtual here it cannot executes it executes the pointed derived class function 
    virtual void display(){
        cout<<"1 The id of the student is "<<id<<endl;
    }
};

class Student : public School{
    string name ;
    string surname;

    public:

    Student(string n , string surn , int i) : School(i){
        name = n;
        surname = surn;
    }

    void display(){
        cout<<"2 The name of the student is "<<name<<endl;
        cout<<"2 The surname of the student is "<<surname<<endl;
        cout<<"2 The id of the student is "<<id<<endl<<endl;
    }
};


int main(){
    string name , surname ;
    int id;

    name = "Sumit";
    surname = "satre";
    id = 12238;

    Student s1(name , surname , id);
    s1.display();

    School* ptr ;
    ptr = &s1;
    ptr->display();


    School* ptr1 = new Student(name , surname , id);
    ptr1->display();
    return 0;
}

// It only pointed from the base class to the derived class and connot vice versa 👹 (it cannot run)