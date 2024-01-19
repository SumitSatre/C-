//constructors in multiple inheritance
#include<iostream>
using namespace std;

class A
{

	int a;

	protected:
	A(int);
	void display();


};

A::A(int m1)
{
    cout<<"\n Inside constructor for superclass A";
	a=m1;

}

void A::display()
{
	cout<<"\n The value of a is "<<a;


}


class B
{

	int b;

	protected:
	B(int);
	void display();


};

B::B(int m)
{
     cout<<"\n Inside constructor for superclass B";
	
	b=m;

}

void B::display()
{
    
	cout<<"\n The value of b is "<<b;


}



class C:public B,public A
{

	int c;

	public:
	C(int,int,int);
	void display();


};

C::C(int m,int n,int o):A(m),B(n)
{
	c=o;

}/*
Here in the title of class C constructor definition we have first tried to call class A constructor and then superclass B constructor. But here constructor of class B is called first because in the title of class C class definition we have mentioned b first followed by A.

*/

void C::display()
{
    	A::display();
	B::display();
	cout<<"\n The value of c is "<<c;


}

int main()
{

	int x,y,z;

	cout<<"\n Enter value for the data member a of direct super class A of class C:";
	cin>>x;

	cout<<"\n Enter value for the data member b of direct super class B of class C:";
	cin>>y;

	cout<<"\n Enter value for the data member c of sub class C:";
	cin>>z;

	C c1(x,y,z);
	
	c1.display();

	return 0;
}