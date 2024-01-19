/*
Friend function:
Friend function is not a member function of the class but still it can access private members of the class but not directly unlike the member functions of the class. But if we want to access private members of the class inside body of the friend function of the class we can do it indirectly by using dot operator on an object or on a reference variable of class type or by using -> operator on the pointer variable of the class type. 

*/
//pgm to define a class Student and this class has a private members name,rno,per and member function //called display() and a friend function called acc()

#include<iostream>

using namespace std;

class Student
{
	char sname[100];
	int srno;
	float sper;
	friend void acc(Student &);

	public:
	void display();	

};
/*
To define a friend function of the class we write the friend function prototype declaration statement using friend keyword of cpp. Also the friend function prototype declaration statement can be writetn in any section private or public etc. in the class definition and still we will be able to access friend function inside body of an external function definition like main().

*/

void acc(Student &s2)
{
	cout<<"\n Enyter student name:";
	cin.ignore();
	cin.getline(s2.sname,100);

	cout<<"\n Enter student rollno:";
	cin>>s2.srno;

	cout<<"\n Enter student percentage:";
	cin>>s2.sper;

}

/*
When we define a friend function of the class, we dont use the :: on the class name in the title of the friend fucntion definition because it is not a membner function of the class

*/

void Student::display()
{
	cout<<"\n The student name is "<<sname<<"\n Student rollno is "<<srno<<"\n Student percnetaghe is "<<sper;
}

int main()
{
	Student s1;

	acc(s1);
/*
When we call friend function of the class we will be calling friend function independently in the body of main() function without using dot operator on any object or reference variable nor by using -> operator on pointer variable of class Student. Here w ehave passed obkect s1 by reference to the acc() function.

*/
	s1.display();

	return 0;
}