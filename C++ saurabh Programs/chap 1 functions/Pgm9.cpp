//pgm to swap values of 2 variables using call by reference

#include<iostream>

using namespace std;

void acc(int &,int &);
/*
Here we have written prototype declaration statement of the acc() function which is telling Cpp compiler that we are going to define our own user defined function called acc() in the pgm and the 2 formal parameters declared in the title of acc() definition will be reference variables of type int. So we have written int & 2 times in the above prototype declaration statement. So acc() function will be called by call by reference.

*/

void display(int,int);
//call by value

void swap(int &,int &);
//call by reference

int main()
{
	int a,b;

	acc(a,b);
/*
Here we have passed references of variables a and b into formal parameters m and n resp when calling acc() function. So m is a reference variable to a and n is a reference variable to b. 

*/
	cout<<"\n THe values of a and b before swapping are:";
	display(a,b);

	swap(a,b);

	cout<<"\n THe values of a and b after swapping are:";
	display(a,b);

	return 0;
}

void acc(int &m,int &n)
{
	cout<<"\n Enter values of a and b:";
	cin>>m>>n;

}

void display(int m,int n)
{
	cout<<"\n The values of a and b are "<<m<<","<<n;
}

void swap(int &m,int &n)
{
	m=m+n;
	n=m-n;
	m=m-n;
//m is 5,n is 10
// m is 15
//n=15-10=5
//m=15-5=10


}