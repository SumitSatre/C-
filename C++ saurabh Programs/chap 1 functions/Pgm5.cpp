//pgm to accept input number from user and find no.of digits,sum of digits and whether it is //palindrome

#include<iostream>
using namespace std;

int sumofdigits(int);
int noofdigits(int);
int ispalindrome(int);

int main()
{
	int a;
	
	cout<<"\n Enter number:";
	cin>>a;

	cout<<"\n The no.of digits is "<<noofdigits(a);

	cout<<"\n The sum of digits is "<<sumofdigits(a);

	if(ispalindrome(a))
	{
		cout<<"\n The entered number is palindrome";

	}

	else
	{
		cout<<"\n The entered number is not palindrome";

	}
	return 0;
}

int noofdigits(int m)
{
	int cnt=0;

	while(m!=0)
	{
		cnt++;
		m=m/10;

	}

	return cnt;
}


int sumofdigits(int m)
{
	int sum=0;

	while(m!=0)
	{
		sum=sum+(m%10);
		m=m/10;

	}

	return sum;
}


int ispalindrome(int m)
{
	int m1=m;
	int reverse=0;

	while(m!=0)
	{
		reverse=(reverse*10)+(m%10);
		m=m/10;

	}

	if(reverse==m1)
	return 1;
	
	else
	return 0;
}