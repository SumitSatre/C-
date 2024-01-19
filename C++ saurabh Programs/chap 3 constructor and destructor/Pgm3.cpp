//accept details of 2 students using non parameterised constructor and parameterised constructor
//and copy constructor

#include<iostream>
#include<string.h>

using namespace std;

class Student
{
	char sname[100];
	int srno;
	int sper;

	public:
	Student();
	Student(char [],int,int);
	Student(Student &);
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

Student::Student(char sname1[],int srno1,int sper1)
{
	strcpy(sname,sname1);
	srno=srno1;
	sper=sper1;


}

Student::Student(Student &s4)
{
	strcpy(sname,s4.sname);
	srno=s4.srno;
	sper=s4.sper;


}
void Student::display()
{
	cout<<"\n The student name is "<<sname<<"\n The student rollno is "<<srno<<"\n The student  percentage is "<<sper;

}

int main()
{
	Student s1;

	

	char sname2[100];
	int srno2;
	int sper2;

	cout<<"\n Enter student name:";
	cin.ignore();
	cin.getline(sname2,99);

	cout<<"\n Enter student rollno:";
	cin>>srno2;

	cout<<"\n Enter student percentage:";
	cin>>sper2;

	Student s2(sname2,srno2,sper2);

	Student s3(s2);

	s1.display();
	s2.display();
	s3.display();

	return 0;
}