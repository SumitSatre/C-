/*
pgm to swap values of 2 variables using call by address

*/

#include<iostream>

using namespace std;

void swap(int *,int *);
/*
Here function prototype declaration statement of swap() function is telling Cpp compiler that the data types of the 2 formal parameters declared in the title of swap() definition are single pointer variables of type int. So when we call swap function we will pass addresses of 2 int variables as 1st and 2nd inputs to swap() call statement. swap() function will be called using call by address.

*/
void display(int,int);
//call by value

int main()
{
	int a,b;

	cout<<"\n Enter values of a and b to be swapped:";
	cin>>a>>b;

	cout<<"\n The values of a and b before swapping are:";
	display(a,b);
	
	swap(&a,&b);

	cout<<"\n The values of a and b after swapping are:";
	display(a,b);
	

	return 0;
}

void display(int a1,int b1)
{
	cout<<a1<<" "<<b1;

}


void swap(int *a2,int *b2)
{
	int temp;

	temp=*a2;
	*a2=*b2;
	*b2=temp;

}