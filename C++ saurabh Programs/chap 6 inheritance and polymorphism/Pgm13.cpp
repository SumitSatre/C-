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

B::B(int m,int n):A(m),b(n)
{
	

}
//here b(n) in the class B constructor definition title will store value of n into data member b of class B

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