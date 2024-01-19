//friend function to multiple classes

#include<iostream>
using namespace std;

class Integer2;
/*
In this pgm we have defined sum() as a common friend function to class Integer1 and Integer2. So because the cpp compiler compiles the pgm from top to bottom so the cpp compiler will not know what is Integer2 in the prototype declaration statement of the sum() friend function in class Integer1 when it tries to compile the pgm from top to bottom. So we have just written the delcaration statement for class Integer2 above class Integer1 definition using class keyword and we have written its actual definition below class Integer1 definition. This is called as forward declaration statement. Here we are just telling compiler that Integer2 is a class and its actual definition is below class Integer1 definition so as to avoid a compiler error in the prototype declaration statement of the sum() friend function in class Integer1 definition. If we had written the definition of class Integer2 above class Integer1 definition then we would need forward declaration statement for class Integer1 above class Integer2 definition.

*/
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
/*
In above statement we are calling sum() function independently because it is a friend function of both classes Integer1 and Integer2 resp. and so it is neither a member function of class Integer1 and Integer2 and so it is called independently and we have passed values of objects i1 and i2 resp. as inputs to the sum()function call statement. Inside the body of sum() function definition, we are adding values of data members x and y of the objects i1 and i2 resp. and the addition is being returned back from the body of the sum() definition and stored into local variable s inside main().



*/

	cout<<"\n The addition of data members is "<<s;
	return 0;
}