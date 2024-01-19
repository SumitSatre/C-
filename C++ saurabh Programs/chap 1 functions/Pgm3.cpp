//pgm to accept character from user and display if it is vowel or consonent and using //conditional operator

#include<iostream>

using namespace std;

void check(char);

int main()
{
	char ch;

	cout<<"\n Enter character:";
	cin>>ch;

	check(ch);
//call by value

	return 0;
}

void check(char ch1)
{
	(((ch1>=65)&&(ch1<=90))||((ch1>=97)&&(ch1<=122)))?((ch1=='a')||(ch1=='e')||(ch1=='i')||(ch1=='o')||(ch1=='u')||(ch1=='A')||(ch1=='E')||(ch1=='I')||(ch1=='O')||(ch1=='U'))?cout<<"\n Entered character is vowel":cout<<"\n Entered character is consonent":cout<<"\n Entered character is not alphabet";

}