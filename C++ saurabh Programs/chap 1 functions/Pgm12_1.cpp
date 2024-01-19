//pgm to define functions for finding area of circle,rectangle and triangle. Use function overloading

#include<iostream>
#include<math.h>
using namespace std;

float area(int);
int area(int,int);
double area(int,int,int);

int main()
{
	int radius;
	int length,breadth;
	int a,b,c;

	cout<<"\n Enter radius of circle:";
	cin>>radius;

	cout<<"\n The area of circle is "<<area(radius);

	cout<<"\n Enter length and breadth of rectangle:";
	cin>>length>>breadth;

	cout<<"\n The area of rectangle is "<<area(length,breadth);


	cout<<"\n Enter 3 sides of triangle:";
	cin>>a>>b>>c;

	cout<<"\n The area of triangle is "<<area(a,b,c);
	
	return 0;
}

double area(int a1,int b1,int c1)
{
	float s=(a1+b1+c1)/2.0;
	return(sqrt(s*(s-a1)*(s-b1)*(s-c1)));

}

float area(int r1)
{
	const float pi=3.142;
	return(pi*r1*r1);

}

int area(int l1,int b1)
{
	return(l1*b1);

}

