/*
Multi level inheritance:


A


B


C

C is the direct subclass of B and B is the direct subclass of A.C is indirect subclass of A.


A

B

C

D

D is direct subclass of C,C is of B,B is of A. C is indirect subclass of B,  is indirect subclass of B and A. In hierarchial inheritance we can have many more levels of inheritance like D can have a direct subclass E, etc.



*/

//pgm for multi level inheritance
/*

University:
uname,uaddress,uwebsite
member functions: accUniversity() and displayUniversity()

University subclass is College
cname,caddress,cwebsite
member functions: accCollege(),displayCollege()


College subclass is Professor
pname,paddress,pqualification
member functions:accProfessor(),displayProfessor()


accept details for a University,college and Professor using multi level inheritance


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
	cout<<"\n Enter the university name:";
	cin.getline(uname,100);

	cout<<"\n Enter the university address:";
	cin.getline(uaddress,100);

	cout<<"\n Enter the university website:";
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
	cout<<"\n Enter the College name:";
	cin.getline(cname,100);

	cout<<"\n Enter the College address:";
	cin.getline(caddress,100);

	cout<<"\n Enter the College website:";
	cin.getline(cwebsite,100);

}

void College::displayCollege()
{
	displayUniversity();
	cout<<"\n\n The College name is :"<<cname<<"\n Address is "<<caddress<<"\n Website is "<<cwebsite;
	

}



class Professor:public College
{
	char pname[100];
	char paddress[100],pqualification[100];

	public:
	void accProfessor();
	void displayProfessor();


};

void Professor::accProfessor()
{
	accCollege();
	cout<<"\n Enter the Professor name:";
	cin.getline(pname,100);

	cout<<"\n Enter the Professor address:";
	cin.getline(paddress,100);

	cout<<"\n Enter the Professor qualification:";
	cin.getline(pqualification,100);

}

void Professor::displayProfessor()
{
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