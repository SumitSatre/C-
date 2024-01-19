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
	B();
	void display();


};

B::B()
{
	cout<<"\n Enter b:";
	cin>>b;

}
/*
From 1st statement in the non parameterised constructor definition of subclass the cpp compiler automatically calls the non parameterised constructor of superclass. So here the cpp compiler will automatically call non constructor of superclass A from the title of the non parameterised constructor of subclass B automatically. So when the statement B b1 executes, the compiler also calls the non parameterised constructor of superclass A which accepts input value of data member a of class A from user.



*/
void B::display()
{
	A::display();
	cout<<"\n The value of b is "<<b;


}


int main()
{
	B b1;

	b1.display();
	return 0;
}