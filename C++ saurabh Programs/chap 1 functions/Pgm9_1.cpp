//pgm to swap values of 2 variables using call by reference

#include<iostream>

using namespace std;

void acc(int &,int &);
void display(int,int);
void swap(int &,int &);

int main()
{
	int a,b;

	acc(a,b);

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


}