//accept details of a student using non parameterised constructor

#include<iostream>

using namespace std;

class Student
{
	char sname[100];
	int srno;
	int sper;

	public:
	Student();
	void display();

};

Student::Student()
{
	cout<<"\n Enter student name:";
	cin.ignore();
	cin.getline(sname,99);

	cout<<"\n Enter student rollno:";
	cin>>srno;

	cout<<"\n Enter student percentage:";
	cin>>sper;

}

void Student::display()
{
	cout<<"\n The student name is "<<sname<<"\n The student rollno is "<<srno<<"\n The student  percentage is "<<sper;

}

int main()
{
	Student s1;

	s1.display();

	return 0;
}