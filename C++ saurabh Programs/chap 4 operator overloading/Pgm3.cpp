/*
Pgm to overload ++ post increment operator for objects of class A, such that if a1,a2 are 2 objects of class A and if we write a2=++a1, then first original value of a1 object must be assigned to a2 and then value of data member m of a1 object must be increased by 1. Do this pgm using member function.

a2=++a1;

a2=a1.operator ++()

When we write the statement inside main() to call the operator ++() function for post increment operation we need to write a2=++a1 and not a2=a1++, but we will write statements inside body of the operator +() member function such that it will work as post increment operator.
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
	A a3(0);
	
	a3=*this;
//In above statement we have stored original value of a1 into a3 using this pointer when the statement a2=++a1 is //executing inside main()

	(this->m)++;
//Here we are increasing value of data member m of a1 object by 1 and not of a3 object

	return a3;
//here we have returning value of a3 object which is storing original value of a1 object so the original value of a1 is //assigned to a2 local variable of main() function definition

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