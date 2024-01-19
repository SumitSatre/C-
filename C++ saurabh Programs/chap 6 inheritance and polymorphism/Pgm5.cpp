/*
Hybrid inheritance:
	
	A

	B	C

	D

Here B is the direct subclass of A, D is the direct subclass of B and C. There is no inheritance relation between A and C, and also between B and C

This is a combination of multiple inheritance((B C)-D) and multi level inheritance(A-B-D)


*/

//pgm for hybrid inheritance
/*

University:
uname,uaddress,uwebsite
member functions: accUniversity() and displayUniversity()

College is direct subclass of University
cname,caddress,cwebsite
member functions: accCollege(),displayCollege()

School is independent class 
sname,saddress,swebsite
member functions: accSchool(),displaySchool()


Professor is direct subclass of School and College
pname,paddress,pqualification
member functions:accProfessor(),displayProfessor()


accept details for a University,college and Professor using hybrid inheritance


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

class College:public University
{
	char cname[100];
	char caddress[100],cwebsite[100];

	protected:
	void accCollege();
	void displayCollege();


};

void College::accCollege()
{
	accUniversity();
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
	displayUniversity();
	cout<<"\n\n The College name is :"<<cname<<"\n Address is "<<caddress<<"\n Website is "<<cwebsite;
	

}



class School
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