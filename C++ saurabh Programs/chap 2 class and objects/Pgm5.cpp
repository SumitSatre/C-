//this pointer
/*
It is a keyword in cpp. It is a predefined pointer variable in cpp and i t points to the currently executing object of the class. 

*/
/*
pgm to implement the pre incrementation operator using objects of class Integer1 such that the data member of class Integer1 will be a m variable of int type, the member functions will be acc(),display(),preincrement(). The preincrement() function will increase value of the object on which we have called it by 1 and return the new value of the object. e.g. If i1 and i2 are 2 objects of class Integer1 and if we write i2=i1.preincrement(), then value of data member m of i1 must be increased by 1 and value of data member i2 must be same as new value of i1.
*/

#include<iostream>

using namespace std;


class Integer1
{
	int m;
	char ch;

	public:
	void acc(int);
	void display();
	Integer1 preincrement();



};

void Integer1::acc(int m)
{
	this->m=m;
/*
When the statement i1.acc(n) is running inside main(), the above statement will automatically access data member m of i1 object. So this->m means i1.m when the statement i1.acc(n) is running inside main. Here it was compulsory to use the 'this' pointer variable to access data member m of the i1 object inside body of acc() function definition because name of the formal parameter m is same as name of the data member m of class Integer1 so there will be an ambiguity in compiler if we dont use 'this' pointer and if we had not used 'this' pointer compiler would not give error but both LHS and RHS would be considered as the formal paramegter m  of the acc() function definition and data member with name m would be ignored. If the name of the formal parameter is not same as name of the data member to which we are assigning value of the formal parameter in body of the member function definition, then in that case it is not needed to use the 'this' pointer variable to access the data member.
*/
}

void Integer1::display()
{
	cout<<"\n The value of m is "<<m;

}

Integer1 Integer1::preincrement()
{
	(this->m)++;
	return *this;
}
/*
Here the 1st Integer1 mentioned in the title of the pre increment() function deifnition represents the return type of the function which means that we will be returning object of class Integer1 using return statement inside body of member function preincrement(). The 2nd Integer1 is mentioned because we need to use :: on class name when we define member function of class outside class definition.

Because we have called the preincrement() member function of class Integer1 on i1 object of class Integer1, so when the preincrement() member function is running, i1 is currently executing object. So the this pointer again points to i1 object. So (this->m)++ is increasing value of data member m of i1 object by 1 and return *this is returning value of i1 object and so all values of data members of i1 object are assigned to data members of i2 object in main(). But i1 and i2 are having different RAM memory areas and using this pointer also helps to save RAM memory in above code because we dont need to again declare another local variable which is object of class Integer1 inside body of preincrement() function definition.
*/

int main()
{
	Integer1 i1,i2;

	int n;
	cout<<"\n Enter the integer value:";
	cin>>n;

	i1.acc(n);
/*
During execution of above statement, we have called the acc() member function on the i1 object by using the dot operator on the i1 object. So when the above statement is running the i1 is currently executing object. So address of i1 object is automatically stored into this pointer variable by compiler.
*/	

	i2=i1.preincrement();	
	
	cout<<"\n The i1 object value is:";
	i1.display();

	cout<<"\n The i2 object value is:";
	i2.display();

	return 0;
}