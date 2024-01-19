//no ambiguity no error pgm

#include<iostream>

using namespace std;

void func(long int);
void func(float);

int main()
{
	
 int a=5;
   
	func((long int)a);
/*
because of explicit type casting of value of a variable into long int type, so cpp compiler will call overloaded function named func() with long int parameter. 

*/
    func((float)a);

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