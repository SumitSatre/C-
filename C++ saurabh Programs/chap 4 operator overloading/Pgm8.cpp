/*
Pgm to overload comparisn operator >,<,== for class A such that if a1 and a2 are objects of class A and if we write a1>a2, then values of data members of a1 and a2 objects must be compared and if value of data member of a1 is greater than value of data member for a2 object then a1>a2 must return 1 i.e. true.
Similarly for <,==
a1>a2
operator >(a1,a2)
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
	friend int operator >(A,A);
	friend int operator <(A,A);
	friend int operator ==(A,A);
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

int operator >(A a4,A a5)
{
	if(a4.m>a5.m)
	return 1;

	else 
	return 0;

}

int operator <(A a4,A a5)
{
	if(a4.m<a5.m)
	return 1;

	else 
	return 0;

}

int operator ==(A a4,A a5)
{
	if(a4.m==a5.m)
	return 1;

	else 
	return 0;

}

int main()
{
	A a1,a2;

	if(a1>a2)//operator >(a1,a2)
	cout<<"\n a1 is greater";

	else if(a1<a2)
	cout<<"\n a1 is lesser";

	else if(a1==a2)
	cout<<"\n Both are equal";
	
	return 0;
}