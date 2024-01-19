//overload <<,>> for objects of class Employee such that if e1 is an object of class Employee and if we write cin>>e1, //then input values must be accepted into data members of e1 and if we write cout<<e1 then val;ues of data members of e1 //must be displayed on screen. Using friend function because >>,<<operarors cannot be overloaded using member function

/*
cin>>e1;
operator >>(cin,e1)

cout<<e1;
*/
#include<iostream>
using namespace std;

class Employee
{
	char ename[100];
	int eid;
	float esalary;

	public:
	friend void operator >>(istream &,Employee &);
	friend void operator <<(ostream &,Employee);
};


void operator >>(istream &i1,Employee &e2)
{
	cout<<"\n Enter employee name:";
	i1.ignore();
	i1.getline(e2.ename,100);

	cout<<"\n Enter employee eid:";
	i1>>e2.eid;

	cout<<"\n Enter employee salary:";
	i1>>e2.esalary;

}

void operator <<(ostream &o1,Employee e2)
{
	o1<<"\n The employee name is "<<e2.ename<<"\n The employee id is "<<e2.eid<<"\n The employee salary is "<<e2.esalary;

}


int main()
{
	Employee e1;

	cin>>e1;
//operatir >>(cin,e1);

	cout<<e1;
//operator <<(cout,e1);
	return 0;
}