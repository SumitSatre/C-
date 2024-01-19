//Pgm to overload ++ pre increment operator for objects of class A, such that if a1,a2 are 2 objects of class A //and if we write a2=++a1, then the value of data member m of a1 object must be increased by 1 and a2 must be //assigned new value of a1 object. Do this pgm by defining operator ++() as a member

/*
a2=++a1;

a2=a1.operator ++()
*/

#include<iostream>
using namespace std;

class A
{
	int m;
	int serno;
	static int cnt;

	public:
	A();
	A(int);
	void display();
	A operator ++();
    void setserno(int);

};
int A::cnt;

void A::setserno(int serno1)
{
    serno=serno1;
}
A::A()
{
	cnt++;
	serno=cnt;

	cout<<"\n Enter value of m for object no."<<serno<<" of class A:";
	cin>>m;

}

A::A(int m1)
{
	cnt++;
	serno=cnt;
	m=m1;

}


void A::display()
{
	cout<<"\n The value of data member m for object no."<<serno<<" of class A is "<<m;

}

A A::operator ++()
{
	(this->m)++;
	return *this;

}


int main()
{
	A a1,a2(0);

	a2=++a1;


    a2.setserno(2);
	a1.display();
	a2.display();

	return 0;
}