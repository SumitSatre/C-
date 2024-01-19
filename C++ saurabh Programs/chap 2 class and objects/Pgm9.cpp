//pgm for pointer to object

#include<iostream>

using namespace std;

class Teacher
{
	char tname[100];
	char tqualification[100];
	char tmobno[12];

	public:
	void accteacher();
	void displayteacher();

};

void Teacher::accteacher()
{
	cout<<"\n Enter teacher name:";
	cin.ignore();
	cin.getline(tname,99);

	cout<<"\n Enter teacher qualification:";
	cin.ignore();
	cin.getline(tqualification,99);

	cout<<"\n Enter teacher mobile number:";
	cin.ignore();
	cin.getline(tmobno,11);

}

void Teacher::displayteacher()
{
	cout<<"\n The teacher name is "<<tname<<"\n The teacher qualification is "<<tqualification<<"\n The teacher mobile number is "<<tmobno;

}

int main()
{
	Teacher t1;
	Teacher *tp1;

	tp1=&t1;
//tp1 beinga  pointer variable of class Teacher we can store address of object of class Teacher into 
//tp1.

	tp1->accteacher();
	tp1->displayteacher();
/*
Here we have indirectly called member functions accteacher() and displayteacher() on the t1 object of 
class Teacher by using -> on tp1 pointer variable which stores address of t1 object.

*/
	return 0;
}