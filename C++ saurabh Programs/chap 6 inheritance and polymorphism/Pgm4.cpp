/*
Hierarchial inheritance:
	
	A

B		C
B and C are the direct subclasses of A. There is no inheritance between B and C.

*/

//pgm for hierarchial inheritance
/*

University:
uname,uaddress,uwebsite
member functions: accUniversity() and displayUniversity()

College is direct subclass of University
cname,caddress,cwebsite
member functions: accCollege(),displayCollege()


University direct subclass is Professor
pname,paddress,pqualification
member functions:accProfessor(),displayProfessor()


accept details for a University,college and Professor using hierarchial inheritance


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
	cin.ignore();
	cin.getline(uname,100);

	cout<<"\n Enter the university address:";
	cin.ignore();
	cin.getline(uaddress,100);

	cout<<"\n Enter the university website:";
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

	public:
	void accCollege();
	void displayCollege();


};

void College::accCollege()
{
	accUniversity();
	cout<<"\n Enter the College name:";
	cin.ignore();
	cin.getline(cname,100);

	cout<<"\n Enter the College address:";
	cin.ignore();
	cin.getline(caddress,100);

	cout<<"\n Enter the College website:";
	cin.ignore();
	cin.getline(cwebsite,100);

}

void College::displayCollege()
{
	displayUniversity();
	cout<<"\n\n The College name is :"<<cname<<"\n Address is "<<caddress<<"\n Website is "<<cwebsite;
	

}



class Professor:public University
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
	
	cout<<"\n\n The Professor name is :"<<pname<<"\n Address is "<<paddress<<"\n Qualification is "<<pqualification;
	

}

int main()
{
	Professor p1;
	College c1;

	int option;
	cout<<"\n Enter whose details do you want to accept and display 1. University and Professor 2. University and College:";
	cin>>option;

	switch(option)
	{
		case 1: p1.accProfessor();
			p1.displayProfessor();
			break;

		case 2: c1.accCollege();
			c1.displayCollege();
			break;

		default: cout<<"\n Invalid choice:";

	}

	
	return 0;
}