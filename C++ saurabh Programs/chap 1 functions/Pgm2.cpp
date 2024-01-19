//pgm to accept a year from user and check if it is leap year or not

#include<iostream>
using namespace std;

int check_leap(int);

int main()
{
	int year;

	cout<<"\n Enter year:";
	cin>>year;

	if(check_leap(year))
	{
		cout<<"\n Year is leap year";
	}
	
	else
	{
		cout<<"\n Year is not leap year";
	}

	return 0;
}

int check_leap(int year)
{

	if(((year%4==0)&&(year%100!=0))||((year%100==0)&&(year%400==0))){
	return 1;
	}

	else{
	return 0;
	}

}
// 1 in C and Cpp means true and 0 means false