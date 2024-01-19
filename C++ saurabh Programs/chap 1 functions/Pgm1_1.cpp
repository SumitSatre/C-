//pgm to accept input values into 2 variables and perform all arithgmatic operations on them
#include<iostream>
using namespace std;


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
