//FUNCTION templates
//define a generic function to find greater of 2 numbers using 2 template types where 1 template type is for //the 1st parameter and 2nd template type is for 2nd parameter

#include<iostream>
using namespace std;

template<class T,class M>
void greater1(T a1,M a2)
{
	if(a1==a2)
	{
		cout<<"\n The 2 are equal";
	}

	else if(a1<a2)
	cout<<"\n The greater number is "<<a2;

	else if(a1>a2)
	cout<<"\n The greater number is "<<a1;
}

int main()
{
	int a;
	float b;

	cout<<"\n Enter the integer value to be compared:";
	cin>>a;

	cout<<"\n Enter the float value to be compared:";
	cin>>b;

	greater1(a,b);
/*
Here for the above call statement, because the 1st input is of type int and 2nd input is of type float, so here for the above call statement, every occurance of T in greater() function definition is replaced by int and every occurance of M in the greater() function definition is replaced by float.

*/

	cout<<"\n Enter the integer value to be compared:";
	cin>>a;

	cout<<"\n Enter the float value to be compared:";
	cin>>b;

	greater1(b,a);
	
	return 0;
}