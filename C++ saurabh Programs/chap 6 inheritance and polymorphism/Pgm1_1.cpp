//pgm for single inheritance
/*
superclass University
data members uname,uwebsite,uaddress
member functions:accUniversity(),displayUniversity()

subclass College
data members cname,cwebsite,caddress
member functions:accCollege(),displayCollege()


*/

#include<iostream>
using namespace std;

class University
{
	char uname[100],uwebsite[100],uaddress[100];

	protected:
	void accUniversity();
	void displayUniversity();

};

void University::accUniversity()
{
	cout<<"\n Enter university name:";
	cin.getline(uname,100);

	cout<<"\n Enter university address:";
	cin.getline(uaddress,100);

	cout<<"\n Enter university website:";
	cin.getline(uwebsite,100);


}


void University::displayUniversity()
{
	cout<<"\n University name is "<<uname<<"\n University website is "<<uwebsite<<"\n University address is "<<uaddress;


}



class College:public University
{
	char cname[100],cwebsite[100],caddress[100];

	public:
	void accCollege();
	void displayCollege();

};


void College::accCollege()
{
	accUniversity();
	cout<<"\n Enter College name:";
	cin.getline(cname,100);

	cout<<"\n Enter College address:";
	cin.getline(caddress,100);

	cout<<"\n Enter College website:";
	cin.getline(cwebsite,100);


}


void College::displayCollege()
{
	displayUniversity();
	cout<<"\n College name is "<<cname<<"\n College website is "<<cwebsite<<"\n College address is "<<caddress;


}


int main()
{
	College c1;

	c1.accCollege();
	c1.displayCollege();


	retrun 0;
}