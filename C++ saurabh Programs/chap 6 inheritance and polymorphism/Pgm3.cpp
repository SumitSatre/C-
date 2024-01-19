/*
Multiple inheritance:
	A	B

	   C

C is direct subclass of A and B. There is no inheritance relation between A and B.



*/

//pgm for multiple inheritance
/*

University:
uname,uaddress,uwebsite
member functions: accUniversity() and displayUniversity()

College
cname,caddress,cwebsite
member functions: accCollege(),displayCollege()


College and University direct subclass is Professor
pname,paddress,pqualification
member functions:accProfessor(),displayProfessor()


accept details for a University,college and Professor using multiple inheritance


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

class College
{
	char cname[100];
	char caddress[100],cwebsite[100];

	protected:
	void accCollege();
	void displayCollege();


};

void College::accCollege()
{
	
	cout<<"\n Enter the College name:";
	cin.getline(cname,100);

	cout<<"\n Enter the College address:";
	cin.getline(caddress,100);

	cout<<"\n Enter the College website:";
	cin.getline(cwebsite,100);

}

void College::displayCollege()
{
	
	cout<<"\n\n The College name is :"<<cname<<"\n Address is "<<caddress<<"\n Website is "<<cwebsite;
	

}



class Professor:public University,public College
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
	displayUniversity();
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