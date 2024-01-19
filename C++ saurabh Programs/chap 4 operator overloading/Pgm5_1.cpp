/*
Pgm to overload arithmatic operators for objects of class A such that if a1,a2,a3 are objects of class A and if we write a3=a1+a2, then values of data members of a1 and a2 objects must be added and assigned to a3 object.
....
Use member function

a3=a1+a2;

a3=a1.operator +(a2)
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
	A operator +(A);
	A operator -(A);	
	A operator *(A);
	A operator %(A);
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

A A::operator +(A a4)
{
	A a5(0);
	a5.m=(this->m)+(a4.m);

	return a5;

}

A A::operator -(A a4)
{
	A a5(0);
	a5.m=(this->m)-(a4.m);

	return a5;
}


A A::operator *(A a4)
{
	A a5(0);
	a5.m=(this->m)*(a4.m);

	return a5;
}

A A::operator %(A a4)
{
	A a5(0);
	a5.m=(this->m)%(a4.m);

	return a5;
}


int main()
{
	A a1,a2,a3(0);

	a3=a1+a2;
	a3.setserno(3);
	cout<<"\n\n Addition of 1st and 2nd object data members are:";
	a3.display();

	a3=a1-a2;
        a3.setserno(3);
	cout<<"\n\n Subtraction of 1st and 2nd object data members are:";
	a3.display();

	a3=a1*a2;
        a3.setserno(3);
	cout<<"\n\n Multiplication of 1st and 2nd object data members are:";
	a3.display();

	a3=a1%a2;
        a3.setserno(3);
	cout<<"\n\n Remainder after division of 1st and 2nd object data members are:";
	a3.display();

	return 0;
}