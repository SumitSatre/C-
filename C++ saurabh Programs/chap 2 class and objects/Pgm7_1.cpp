//friend function to multiple classes

#include<iostream>
using namespace std;

class Integer2;

class Integer1
{
	int x;

	public:
	void acc1();
	void display1();
	friend int sum(Integer1,Integer2);

};

void Integer1::acc1()
{
	cout<<"\n Enter value of x:";
	cin>>x;

}


void Integer1::display1()
{
	cout<<"\n The value of x is "<<x;

}



class Integer2
{
	int y;

	public:
	void acc2();
	void display2();
	friend int sum(Integer1,Integer2);

};

void Integer2::acc2()
{
	cout<<"\n Enter value of y:";
	cin>>y;

}


void Integer2::display2()
{
	cout<<"\n The value of y is "<<y;

}

int sum(Integer1 i3,Integer2 i4)
{
	return(i3.x+i4.y);

}

int main()
{
	Integer1 i1;
	Integer2 i2;
	i1.acc1();
	i2.acc2();
	
	i1.display1();
	i2.display2();

	int s=sum(i1,i2);


	cout<<"\n The addition of data members is "<<s;
	return 0;
}