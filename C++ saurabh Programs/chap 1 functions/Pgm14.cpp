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
Again we get compiler error because though data type of actual parameyter a is matching exactly with the data type of formal parameter of the 1st overloaded function func() with int parameter, but it can also map the above call statement to the overloaded function with float parameter because when we assign a int value to a float variable there is no loss of precision or data. 
*/


	return 0;
}

void func(int m)
{
	cout<<"\n Inside the body of the overloaded function named func with the long int parameter and having value "<<m;

}

void func(float n)
{
	cout<<"\n Inside the body of the overloaded function named func with the float parameter and having value "<<n;

}