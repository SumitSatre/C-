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
/*
Here we have declared a member function named operator +() whose formal parameter type is A and whose return type is A. This means that we will be returning an object of class A from body of operator +() member function using return statement and compiler will also be passing an object of class A by value to the operator +() member function. 

*/
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
//this->m means a1.m because when the statement a3=a1+a2 is running inside body of main(), the operator +() function has //been called on a1 object and a2 object is passed by value to it. So 'this' points to a1 object.

	return a5;
//value of a5 is returned and assigned to a3 object of main()


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
//a3=a1.operator +(a2)
/*
Here the above statement is executed as a1.operator +(a2) and so the operator +() function is called on a1 object and a2 object is passed by value automatically by cpp compiler because we have mentioned a1 object on LHS of the + operator and a2 on RHS. Also because formal parameter declared in the title of the operator +() function is a normal object of class A so the object a2 will be passed by value into operator +() function which has been called on a1 object during execution of above statement a3=a1+a2.
*/
	 a3.setserno(3);
	cout<<"\n Addition of 1st and 2nd object data members are:";
	a3.display();

	a3=a1-a2;
        a3.setserno(3);
	cout<<"\n Subtraction of 1st and 2nd object data members are:";
	a3.display();

	a3=a1*a2;
        a3.setserno(3);
	cout<<"\n Multiplication of 1st and 2nd object data members are:";
	a3.display();

	a3=a1%a2;
        a3.setserno(3);
	cout<<"\n Remainder after division of 1st and 2nd object data members are:";
	a3.display();

	return 0;
}