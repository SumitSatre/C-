//pgm to accept and display details of single student using class and object
#include<iostream>
using namespace std;

class Student
{
	private:
	char sname[100];
	int srno;
	float sper;
	int sage;

	public:
	void accStudentDetails();
	void displayStudentDetails();
	void calStudentPercentage();

}; 


void Student::accStudentDetails()
{
		cout<<"\n Enter the student name:";
		cin.ignore();
		cin.getline(sname,99);
//fflush(stdin)
		cout<<"\n Enter student rollno:";
		cin>>srno;

		cout<<"\n Enter student percentage:";
		cin>>sper;

		cout<<"\n Enter student age:";
		cin>>sage;
}
	
void Student::displayStudentDetails()
{
		cout<<"\n The student name is "<<sname<<"\n The student rollno is "<<srno<<"\n The student percentage is "<<sper<<"\n The student age is "<<sage;
}




int main()
{
	Student s1;

	s1.accStudentDetails();
	s1.displayStudentDetails();

	return 0;
}
