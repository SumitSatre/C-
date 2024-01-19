//accept details of 2 students using non parameterised constructor and parameterised constructor
#include<iostream>
#include<string.h>

using namespace std;

class Student
{
	char sname[100];
	int srno;
	int nsubjects;
	int *marks;
	float sper;

	public:
	Student();
	Student(char [],int,int);
	
	void display();

};

Student::Student()
{
	cout<<"\n Enter student name:";
	cin.ignore();
	cin.getline(sname,99);

	cout<<"\n Enter student rollno:";
	cin>>srno;

	cout<<"\n Enter how many subjects:";
	cin>>nsubjects;

	marks=new int[nsubjects];

	int i;

	cout<<"\n Enter the marks for the "<<nsubjects<<" number of subjects for student:";

	int sum=0;
	for(i=0;i<=nsubjects-1;i++)
	{
		cin>>marks[i];
		sum=sum+marks[i];
	}

	sper=((float)sum)/nsubjects;

}

Student::Student(char sname1[],int srno1,int nsubjects1)
{
	strcpy(sname,sname1);
	srno=srno1;
	
	nsubjects=nsubjects1;

	marks=new int[nsubjects];

	int i;

	cout<<"\n Enter the marks for the "<<nsubjects<<" number of subjects for student:";

	int sum=0;
	for(i=0;i<=nsubjects-1;i++)
	{
		cin>>marks[i];
		sum=sum+marks[i];
	}

	sper=((float)sum)/nsubjects;

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
	int sper2,nsubjects2;

	cout<<"\n Enter student name:";
	cin.ignore();
	cin.getline(sname2,99);

	cout<<"\n Enter student rollno:";
	cin>>srno2;



	cout<<"\n Enter how many subjects:";
	cin>>nsubjects2;

	Student s2(sname2,srno2,nsubjects2);

	
	s1.display();
	s2.display();
	

	return 0;
}