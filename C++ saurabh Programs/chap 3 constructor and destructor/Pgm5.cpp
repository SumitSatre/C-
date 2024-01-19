/*
Destructor:
Destructor is a special member function of the class with same name as class name and no return type. The name of the destructor is preceded by tilde symbol ~. The destructor can never have parameters.So unlike constructor we cannot define multiple destructors for the same class definition. So we can define atmost 1 destructor for the class. 

If we have not defined any destructor for the class explicitly the cpp compiler will automatically define a destructor for the class which is called default destructor.

But if we have already defined a destructor for the class then compiler will not create a default destructor for the class. If we want some code to be executed when the object of the class is getting destroyed, then we can define a destructor explicitly for the class and place the code inside the body of that destructor.

*/

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
/*
Each time a new Book class object is getting created we are increasing value of the static data member cnt by 1 for the newly created Book object and the value of static data member cnt will be same for all objects of class Book and then we also storing current value of static data member cnt of class Book to non static data member serno of the new Book object which is getting created. 

*/
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

/*
Here the constructor of class Book is called 4 times once for b1, then for b2 then for b3 and finally for b4. So constructors are called in same order which is the order in which we have declared the objects or variables of the class type.

After execution of main() ends the scope and lifetime of the variables b1,b2,b3 and b4 also ends. So the destructors will be called automatically by compiler first for b4, then for b3,then for b2 and then for b1. The destructors are called in exact reverse order to the order in which constructors are called

*/