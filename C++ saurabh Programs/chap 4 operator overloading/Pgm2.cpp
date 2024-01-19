//Pgm to overload ++ pre increment operator for objects of class A, such that if a1,a2 are 2 objects of class A //and if we write a2=++a1, then the value of data member m of a1 object must be increased by 1 and a2 must be //assigned new value of a1 object. Do this pgm by defining operator ++() as a friend function
/*
a2=++a1;
a2=operator ++(a1)


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
	friend A operator ++(A &);
/*
Here we have declared operator ++() as friend function of class A, and its return type is A which means that we are going to return an object of class A from body of operator ++() friend function and we also want an object of class A to be passed by reference to it. So we have declared the data type of the formal parameter of the operator ++() friend function as a reference variable of class A.

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

A operator ++(A &a3)
{
	(a3.m)++;
//Because a3 is a reference variable to a1 object of main() when the statement a2=++a1 executes, so (a3.m)++ will also increase value of data member m of a1 //object by 1.

	return a3;	

}


int main()
{
	A a1,a2(0);

	a2=++a1;
/*
Here compiler will run the above statement as a2=operator ++(a1) and a1 will be passed by reference to the operator ++() and operator ++() will not be called on a1 object because it is not a member function of class A but it is a friend function of class A. So operator ++() function is called independently in the pgm and a1 object will be passed to it by reference into formal parameter a3 which is declared as a reference variable in the title of the operator ++() friend function. So new value of a3 object is returned back from the body of the operator ++() friend function and assigned to a2 object on LHS of the above statement.
*/

    a2.setserno(2);
	a1.display();
	a2.display();

	return 0;
}