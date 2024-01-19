//pgm to count how many objects of class CricketPlayer have bene created in the pgm

#include<iostream>
using namespace std;

class CricketPlayer
{
	char pname[100];
	int nruns;
	int nwickets;
	int nmatches;
	static int cnt;
	
	public:
	void acc();
	void display();
	static void showcnt();

};
int CricketPlayer::cnt;

void CricketPlayer::acc()
{
	cnt++;
	cout<<"\n Enter player name:";
	cin.ignore();
	cin.getline(pname,100);

	cout<<"\n Enter no. of runs:";
	cin>>nruns;

	cout<<"\n Enter no. of matches:";
	cin>>nmatches;

	cout<<"\n Enter no. of wickets:";
	cin>>nwickets;
}

void CricketPlayer::display()
{
	cout<<"\n The player name is "<<pname<<"\n The player no. of runs scored are "<<nruns<<"\n The no. of matches played are "<<nmatches<<"\n The no. of wickets taken are "<<nwickets;


}

void CricketPlayer::showcnt()
{
	cout<<"\n The no. of cricketplayer objets created are "<<cnt;

}

int main()
{
	CricketPlayer c1,c2,c3;

	c1.acc();
	c2.acc();
	c3.acc();

	c1.display();
	c2.display();
	c3.display();

	CricketPlayer::showcnt();
/*
Value of cnt displayed at end in body of showcnt() static member function is 3 because for each object when we call acc() function by using dot operator on each object we are increasing value of cnt static data member in body of acc() member function by 1. Because cnt is a static data member of class CricketPlayer so if we make a change in value of cnt through 1 object of class CricketPlayer that same change is reflected in values of all other objects of class CricketPlayer.
*/


	return 0;
}