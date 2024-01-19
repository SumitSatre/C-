/*
*
* *
* * *
* * * *


* * * *
* * *
* *
*

1
1 2
1 2 3 
1 2 3 4

1
2 3
4 5 6
7 8 9 10


*/

#include<iostream>

using namespace std;

void pattern1();
void pattern2();
void pattern3();
void pattern4();


int main()
{
	int option;

	cout<<"\n Enter your choice   1. Pattern 1    2. Pattern 2    3. Pattern 3    4. Pattern4:";
	cin>>option;

	switch(option)
	{
		case 1:
			pattern1();
			break;

		case 2:
			pattern2();
			break;


		case 3:
			pattern3();
			break;

		case 4:
			pattern4();
			break;
	
		default: cout<<"\n Invalid choice";

	}
	return 0;
}

void pattern1()
{
	int i,j;

	for(i=1;i<=4;i++)
	{
		cout<<"\n";
		for(j=1;j<=i;j++)
		{
			cout<<"* ";
		}

	}

}


void pattern2()
{
	int i,j;

	for(i=1;i<=4;i++)
	{
		cout<<"\n";
		for(j=4;j>=i;j--)
		{
			cout<<"* ";
		}

	}

}


void pattern3()
{
	int i,j,cnt;

	for(i=1;i<=4;i++)
	{
		cout<<"\n";
		cnt=1;
		for(j=1;j<=i;j++)
		{
			cout<<cnt<<" ";
			cnt++;
		}

	}

}


void pattern4()
{
	int i,j,cnt=1;

	for(i=1;i<=4;i++)
	{
		cout<<"\n";
		
		for(j=1;j<=i;j++)
		{
			cout<<cnt<<" ";
			cnt++;
		}

	}

}
