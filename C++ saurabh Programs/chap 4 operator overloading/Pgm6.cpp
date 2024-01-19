/*
Pgm to overload arithmatic operators for objects of class A such that if a1,a2,a3 are objects of class A and if we write a3=a1+a2, then values of data members of a1 and a2 objects must be added and assigned to a3 object.
....
Use friend function

a3=a1+a2;

a3=operator +(a1,a2)
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
	friend A operator +(A,A);
//Here we have declared operator +() as friend function of class A and its return type is A and its 2 formal parameters //are objects of class A. So the cpp compiler will pass values of 2 objects of class A to the operator +() function

	friend A operator -(A,A);	
	friend A operator *(A,A);
	friend A operator %(A,A);
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

A operator +(A a4,A a6)
{
	A a5(0);
	a5.m=(a4.m)+(a6.m);

	return a5;

}
//Because friend function is not a member function of class we dont use :: on class name in title of friend function //definition. So we have removed A:: in the title of the operator +() friend function definition


A operator -(A a4,A a6)
{
	A a5(0);
	a5.m=(a4.m)-(a6.m);

	return a5;

}

A operator *(A a4,A a6)
{
	A a5(0);
	a5.m=(a4.m)*(a6.m);

	return a5;

}

A operator %(A a4,A a6)
{
	A a5(0);
	a5.m=(a4.m)%(a6.m);

	return a5;

}


int main()
{
	A a1,a2,a3(0);

	a3=a1+a2;
//Above statement is executed as operator +(a1,a2), so operator +() function is called independently and the values of //a1 and a2 objects are passed to it by value as inputs, and value of object returned from body of the operator +() //function is assigned to a3 object mentioned on LHS of above statement
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