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

/*

protected is 3rd access keyword in cpp. When a member of the class is declared or defined as protected, then that member of the class can be directly accessed inside body of the member functions of same class like private and public members of class, but the protected members of the class can also be inherited by subclass like public members of class, and so protected members of class can also be directly accessed inside member functions of its subclass like public members of the class. 

But private members of class cannot be inherited by subclass and so they cannot be accessed inside member functions of subclass.

But unlike public members of class, we cannot access protected members of class inside body of external functions like main() which donot belong to same class nor to the subclass. 

When we create object of subclass the object of superclass is automatically internally created inside it. So generally we define member functions of superclass as protected and we will always define member functions of lowermost subclass as public because we are going to create object of lowermost subclass in the program and we are going to call member functions of lowermost subclass on its object in main() and we are going to directly call member functions of superclass inside member functions of its subclass. 

So here because University is superclass of College, we are going to directly call member functions of superclass University inside member functions of subclass College and so we have defined member functions of superclass University as protected and we have defined member functions of subclass College as public. We are going to create object of lowermost subclass College inside body of main() and then we are going to call member functions of lowermost subclass College inside body of main().
*/

class College:public University
{
	char cname[100],cwebsite[100],caddress[100];

	public:
	void accCollege();
	void displayCollege();

};

/*
In the title of the class definitionof College, the syntax used is the syntax for defining subclass from superclass University. Here we have used public as mode of inheritance.

Mode of inheritance decides what will be access keywords of superclass insdie the subclass after they are inherited by the subclass.

There are 3 modes of inheritance:
public,private and protected

In public mode of inheritance, protected and public members of superclass remain protected and public resp. in subclass  when they are inherited by subclass.

In private mode of inheritance, protected and public members of superclass become private  in subclass  when they are inherited by subclass.

In protected mode of inheritance, protected and public members of superclass become protected  in subclass  when they are inherited by subclass.


*/
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