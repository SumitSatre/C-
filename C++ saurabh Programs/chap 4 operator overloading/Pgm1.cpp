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
/*
Here to get the exact prototype declaration statement of the operator ++() member function, we can just write in rough as :a2=++a1, where a1 and a2 are 2 objects of class A. So when the statement a2=++a1 executes in the pgm, compiler will execute it as a2=a1.operator ++() and so the operator ++() member function is called automatically on the a1 object and its return value is stored into a2 object. So the return type of the operator ++() member function has been kept as A class type and the operator++() member function doesnt have any formal parameters.
*/
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
/*
The leftmost A in the title of the operator ++() member function definition represents the return type and 2nd A is used because we need to use :: on class name in title of the member function definition of the class when it is defined outside the class definition,
*/

int main()
{
	A a1,a2(0);

	a2=++a1;
//here the statement is executed as a1.operator ++()
/*When the statement a2=++a1 executes, because operator ++() is called on a1 object automatically, so inside body of the operator ++() member function, the 'this' pointer will point to a1 object automatically. So when the statement a2=++a1 executes this->m means a1.m inside body of operator ++() member function and return *this will return value of a1 object indirectly using this pointer variable.
*/

	a2.setserno(2);

	a1.display();
	a2.display();

	

	return 0;
}