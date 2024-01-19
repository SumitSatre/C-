/*
Friend class: It is a class which has been defined as a friend to another class. The member functions of friend class will be the friend functions of the other class to which it is a friend. This means that insid ebody of the member functions of friend class we can access private members of the other class indirectly using dot operator on object or on reference variable or by using -> operator on pointer variable of the class type.

*/

//pgm for friend class
#include<iostream>

using namespace std;

class MNC;

class Employee
{
	char ename[100];
	int eid;
	float esalary;
    friend MNC;


};




class MNC
{
	char mncname[100];
	char mncwebsite[100];
	char mncaddress[100];

	public:
	void accmnc(Employee &);
	void displaymnc(Employee);

};

void MNC::accmnc(Employee &e2)
{
	cout<<"\n Enter employee name:";
	cin.ignore();
	cin.getline(e2.ename,99);

	cout<<"\n Enter employee id:";
	cin>>e2.eid;

	cout<<"\n Enter employee salary:";
	cin>>e2.esalary;

	cout<<"\n Enter mnc name:";
	cin.ignore();
	cin.getline(mncname,99);

	cout<<"\n Enter mnc website:";
	cin.ignore();
	cin.getline(mncwebsite,99);

	cout<<"\n Enter mnc address:";
	cin.ignore();
	cin.getline(mncaddress,99);

}

void MNC::displaymnc(Employee e2)
{
	cout<<"\n The employee name is "<<e2.ename<<"\n Th employee id is "<<e2.eid<<"\n The employee salary is "<<e2.esalary;

	cout<<"\n The mnc name is "<<mncname<<"\n The mnc website is "<<mncwebsite<<"\n The mnc address is "<<mncaddress;

}
int main()
{
	Employee e1;
	MNC m1;

	m1.accmnc(e1);
	m1.displaymnc(e1);

	return 0;
}