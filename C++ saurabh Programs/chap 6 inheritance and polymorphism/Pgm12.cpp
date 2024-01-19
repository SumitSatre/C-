//calling parameterised constructor of direct superclass in single inheritance

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
	a=m1;

}

void A::display()
{
	cout<<"\n The value of a is "<<a;


}


class B:public A
{

	int b;

	public:
	B(int,int);
	void display();


};

B::B(int m,int n):A(m)
{
	b=n;

}
//Here because direct superclass A has a parameterised constructor we must call it from the title of constructor definition of //subclass B explicitly


void B::display()
{
    A::display();
	cout<<"\n The value of b is "<<b;


}


int main()
{

	int a1,b2;

	cout<<"\n Enter value for the data member a of class A:";
	cin>>a1;

	cout<<"\n Enter value for the data member b of class B:";
	cin>>b2;

	B b1(a1,b2);
	
	b1.display();

	return 0;
}