/*
pgm for alphabet digit and special symbol...

*/

#include<iostream>
using namespace std;

void check(char);

int main()
{
	char ch;

	cout<<"\n Enter character:";
	cin>>ch;

	check(ch);

	return 0;
}

void check(char ch1)
{
	
	switch((ch1>=65)&&(ch1<=90))
	{
		case 1: cout<<"\n Entered character is upper case and its corr. lower case is "<<((char)(ch1+32));
			break;

		case 0:
			switch((ch1>=97)&&(ch1<=122))
			{
				case 1:cout<<"\n Entered character is lower case and its corr. upper case is "<<((char)(ch1-32));
					break;

				case 0:
					switch((ch1>=48)&&(ch1<=57))
					{
						case 1:cout<<"\n Entered character is digit";
							break;

						case 0:cout<<"\n Entered character is special symbol";
					}

			}
	}

}
