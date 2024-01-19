/*
virtual base class:
	A
B		C

	D

D is direct subclass of B and C. B and C are direct subclass of A. Here the members of topmost superclass A are inherited by lowermost subclass D once through B and once through C. So the members of topmost superclass A are inherited twice into D. So we get compiler error.

So to avoid the error, we will use virtual keyword while defining B and C as the direct subclasses of A. So now the members of A will get inherited into lowermost subclass D either through B or through C but not both.

Also to prevent the member functions of topmost superclass A from getting called 2 times on same object of class D, we will call member functions of classes A,B and C inside member functions of lowermost subclass D.


*/

#include<iostream>
using namespace std;

class University
{
	char uname[100];
	char uaddress[100],uwebsite[100];

	protected:
	void accUniversity();
	void displayUniversity();


};

void University::accUniversity()
{
	cout<<"\n Enter the university name where the professor works:";
	cin.ignore();
	cin.getline(uname,100);

	cout<<"\n Enter the university address where the professor works:";
	cin.ignore();
	cin.getline(uaddress,100);

	cout<<"\n Enter the university website where the professor works:";
	cin.ignore();
	cin.getline(uwebsite,100);

}

void University::displayUniversity()
{
	cout<<"\n\n The university name is :"<<uname<<"\n ADdress is "<<uaddress<<"\n Website is "<<uwebsite;
	

}

class College:virtual public University
{
	char cname[100];
	char caddress[100],cwebsite[100];

	protected:
	void accCollege();
	void displayCollege();


};

void College::accCollege()
{
	
	cout<<"\n Enter the College name where the professor works:";
	cin.ignore();
	cin.getline(cname,100);

	cout<<"\n Enter the College address where the professor works:";
	cin.ignore();
	cin.getline(caddress,100);

	cout<<"\n Enter the College website where the professor works:";
	cin.ignore();
	cin.getline(cwebsite,100);

}

void College::displayCollege()
{
	
	cout<<"\n\n The College name is :"<<cname<<"\n Address is "<<caddress<<"\n Website is "<<cwebsite;
	

}



class School:virtual public University
{
	char sname[100];
	char saddress[100],swebsite[100];

	protected:
	void accSchool();
	void displaySchool();


};

void School::accSchool()
{
	
	cout<<"\n Enter the School name where the professor works:";
	cin.ignore();
	cin.getline(sname,100);

	cout<<"\n Enter the School address where the professor works:";
	cin.ignore();
	cin.getline(saddress,100);

	cout<<"\n Enter the School website where the professor works:";
	cin.ignore();
	cin.getline(swebsite,100);

}

void School::displaySchool()
{
	
	cout<<"\n\n The School name is :"<<sname<<"\n Address is "<<saddress<<"\n Website is "<<swebsite;
	

}




class Professor:public School,public College
{
	char pname[100];
	char paddress[100],pqualification[100];

	public:
	void accProfessor();
	void displayProfessor();


};

void Professor::accProfessor()
{
	accUniversity();
	accSchool();
	accCollege();
	
	cout<<"\n Enter the Professor name:";
	cin.ignore();
	cin.getline(pname,100);

	cout<<"\n Enter the Professor address:";
	cin.ignore();
	cin.getline(paddress,100);

	cout<<"\n Enter the Professor qualification:";
	cin.ignore();
	cin.getline(pqualification,100);

}

void Professor::displayProfessor()
{
	displayUniversity();
	displaySchool();
	displayCollege();
	
	cout<<"\n\n The Professor name is :"<<pname<<"\n Address is "<<paddress<<"\n Qualification is "<<pqualification;
	

}

int main()
{
	Professor p1;
	p1.accProfessor();
	p1.displayProfessor();

	
	return 0;
}