//pgm to create a few objects of class Book and using concept of static data member of the class count the number of //objects created and also use constructor and destructor


#include<iostream>

using namespace std;

class Book
{
	char bname[100],aname[100],bisbnno[100];
	int bprice;
	static int cnt;
	int serno;

	public:
	Book();
	void display();
	~Book();//destructor

};
int Book::cnt;
Book::Book()
{
	cnt++;
	serno=cnt;
	cout<<"\n Enter the book details for the book no."<<serno;

	cout<<"\n Enter book name:";
	cin.ignore();
	cin.getline(bname,100);

	cout<<"\n Enter book author name:";
	cin.ignore();
	cin.getline(aname,100);


	cout<<"\n Enter book isbn no:";
	cin.ignore();
	cin.getline(bisbnno,100);

	cout<<"\n Enter book price:";
	cin>>bprice;


}

void Book::display()
{
	cout<<"\n\n The book details for book no."<<serno<<" are:";
	cout<<"\n The book name is "<<bname<<"\n The book author name is "<<aname<<"\n The book price is "<<bprice<<"\n The book isbn number is "<<bisbnno;

}

Book::~Book()
{
	cout<<"\n\n Book no."<<serno<<" is getting destroyed";
	cnt--;
	cout<<"\n The number of book objects remaining are:"<<cnt;

}

int main()
{
	Book b1,b2,b3,b4;

	b1.display();
	b2.display();
	b3.display();
	b4.display();
		

	return 0;
}

