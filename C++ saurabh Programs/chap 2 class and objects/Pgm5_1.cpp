/*
pgm to implement the pre incrementation operator using objects of class Integer1 such that the data member
 of class Integer1 will be a m variable of int type, the member functions will be acc(),display(),
 preincrement(). The preincrement() function will increase value of the object on which we have called 
 it by 1 and return the new value of the object. e.g. If i1 and i2 are 2 objects of class Integer1 and 
 if we write i2=i1.preincrement(), then value of data member m of i1 must be increased by 1 and value of
  data member i2 must be same as new value of i1.
*/

#include<iostream>

using namespace std;


class Integer1
{
	int m;
	char ch;

	public:
	void acc(int);
	void display();
	Integer1 preincrement();



};

void Integer1::acc(int m)
{
	this->m=m;
}

void Integer1::display()
{
	cout<<"\n The value of m is "<<m;

}

Integer1 Integer1::preincrement()
{
	(this->m)++;
	return *this;
}

int main()
{
	Integer1 i1,i2;

	int n;
	cout<<"\n Enter the integer value:";
	cin>>n;

	i1.acc(n);


	i2=i1.preincrement();	
	
	cout<<"\n The i1 object value is:";
	i1.display();

	cout<<"\n The i2 object value is:";
	i2.display();

	return 0;
}