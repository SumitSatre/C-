//ambiguity in overloading

#include<iostream>

using namespace std;

void func(long int);
void func(float);

int main()
{
	
	int a=5;

	func(a);
/*
Here we get compiler error because the a being an actual parameter of int type and an int actual parameter can be assigned to a float formal parameter or to an long int formal parameter, so there is ambiguity in cpp compiler for the above call statement, so we get a compiler error for the above call statement.
*/


	return 0;
}

void func(long int m)
{
	cout<<"\n Inside the body of the overloaded function named func with the long int parameter and having value "<<m;

}

void func(float n)
{
	cout<<"\n Inside the body of the overloaded function named func with the float parameter and having value "<<n;

}