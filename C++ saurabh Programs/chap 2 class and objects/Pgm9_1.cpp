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


	tp1->accteacher();
	tp1->displayteacher();

	return 0;
}