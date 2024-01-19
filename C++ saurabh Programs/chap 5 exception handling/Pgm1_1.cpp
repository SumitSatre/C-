//pgm to divide 2 numbers and to generate an exception is user enters denominator //0, and to make user keep on reentering correct denominator till user enters non //zero denominator and after user enters non zero denominator then the 2 numbers //must be divided and division must be displayed on screen

#include<iostream>
using namespace std;


class DivisionException
{
	int a,b;
	
	public:
	DivisionException();
	void division();
	
};

DivisionException::DivisionException()
{
	cout<<"\n Enter the numerator:";
	cin>>a;

	while(1)
	{
		try
		{
			cout<<"\n Enter the denominator:";
			cin>>b;
			if(b==0)
			{
				throw 1;
			}	
			cout<<"\n The denominator entered is correct";
			break;
		}
		
		catch(int i)
		{
			cout<<"\n The denominator is invalid. You cannot enter a non zero denominator. Please reenter:";
			
		}
		
	}

}

void DivisionException::division()
{
	float res=((float)a)/b;

	cout<<"\n The result of division is "<<res;

}

int main()
{
	DivisionException e1;

	e1.division();

	return 0;
}