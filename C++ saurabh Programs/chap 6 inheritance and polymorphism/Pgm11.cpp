#include<iostream>
using namespace std;

class A
{

	int a;

	protected:
	A();
	void display();


};

A::A()
{
	cout<<"\n Enter a:";
	cin>>a;

}

void A::display()
{
	cout<<"\n The value of a is "<<a;


}


class B:public A
{

	int b;

	public:
	B(int);
	void display();


};

B::B(int m)
{
	b=m;

}

void B::display()
{
    A::display();
	cout<<"\n The value of b is "<<b;


}

/*
From 1st statement in the parameterised constructor definition of subclass the cpp compiler automatically calls the non parameterised constructor of superclass. So here the cpp compiler will automatically call non constructor of superclass A from the title of the parameterised constructor of subclass B automatically. So when the statement B b1(n) executes, the compiler also calls the non parameterised constructor of superclass A which accepts input value of data member a of class A from user.



*/
int main()
{

	int n;

	cout<<"\n Enter value for the local variable b:";
	cin>>n;

	B b1(n);
	
	b1.display();

	return 0;
}