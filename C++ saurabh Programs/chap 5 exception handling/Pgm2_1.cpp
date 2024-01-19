/*
accept a mobile number from user and check if it is having alphabet or not. If it is having alphabet then generate float type of exception and if its length is more than 11 then generate int type of exception and if mobile number is correct then display mobile number

*/


#include<iostream>
#include<string.h>
using namespace std;

class MobileNumber
{
	char mobno[20];
	
	public:
	MobileNumber();
	void display();

};

MobileNumber::MobileNumber()
{
    int i;
	while(1)
	{
		try
		{
			cout<<"\n Enter mobile number:";
			cin.ignore();
			cin.getline(mobno,20);

			if((strlen(mobno)!=10)&&(strlen(mobno)!=11))
			{
				throw 200;

			}

			i=0;
			while(mobno[i]!='\0')
			{
				if((mobno[i]>=48)&&(mobno[i]<=57))
				{
				    i++;
				    continue;
				}
				else
				{
					throw 3.5f;

				}
			
			}
			cout<<"\n The mobile number is correct";
			break;
		}

		catch(int i)
		{
			cout<<"\n The mobile number entered is incorrect. It must have size equal to either 10 or 11.Please reenter:";

		}


		catch(float j)
		{
			cout<<"\n The mobile number entered is incorrect. It must not contain any character apart from digit.Please reenter:";

		}

	}

}

void MobileNumber::display()
{
	cout<<"\n The mobile number entered is "<<mobno;

}


int main()
{
	MobileNumber m1;
	m1.display();


	return 0;
}