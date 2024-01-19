//pgm to accept input values into 2 variables and perform all arithgmatic operations on them
#include<iostream>
using namespace std;
/*
For every Cpp pgm we need to write #include<iostream> at start of Cpp pgm. Also below that we need to always compulsoilry write the statement using namespace std. These 2 statements must always be written at start of Cpp pgm. Also when we include header file on cpp we dont need to mention .h extension of the header file. 

Along with header files in cpp system library, we have also have many predefined files called namespace files. One of the most commonly used namespace files is std file. The cout and cin keywords are stored in std namespace file. So to include namespace file we dont use #include, butwe use the statement called using at start of cpp pgm below #include.

*/

int add(int,int);
int sub(int,int);
int mul(int,int);
int rem(int,int);
float divi(int,int);

int main()
{
	int a,b;

	cout<<"\n Enter integer values of a and b on which we want to perform arithmatic operations:";
	cin>>a>>b;

	int res1=add(a,b);
/*
In cpp pgm we can declare local variables anywhere inside body of the function definition unlike C language. Here add() user defined function has been called using call by value.

*/
	cout<<"\n The addition is "<<res1;
	
	res1=sub(a,b);
	cout<<"\n The subtraction is "<<res1;

	res1=mul(a,b);
	cout<<"\n The multiplication is "<<res1;


	res1=rem(a,b);
	cout<<"\n The remainder is "<<res1;

	float res2=divi(a,b);
	cout<<"\n The division is "<<res2;
	
	return 0;
}

int add(int a1,int b1)
{
	int c;
	c=a1+b1;
	return c;

}

int sub(int a1,int b1)
{
	int c;
	c=a1-b1;
	return c;

}

int mul(int a1,int b1)
{
	int c;
	c=a1*b1;
	return c;

}


int rem(int a1,int b1)
{
	int c;
	c=a1%b1;
	return c;

}


float divi(int a1,int b1)
{
	float c;
	c=((float)a1)/b1;
	return c;

}
