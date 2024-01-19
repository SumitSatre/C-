//pgm for virtual function
	A
B		C


#include<iostream>
using namespace std;

class Vehicle
{
	

	public:
	virtual void acc()=0;
	virtual void display()=0;

};
/*
virtual is a keyword in cpp. Here acc() and display() are pure virtual functions of class Vehicle. When we declare a member function of the class by using virtual keyword and assigning it the value 0 in its prototype declaration statement then the function becomes pure virtual function. Pure virtual functions dont have a body or definition. They only have a prototype declaration statement. 

The class in which one or more member functions are pure virtual is called abstract class.Here Vehicle is abstract class. We cannot create an object of an abstract class. So we cannot create object of abstract class but we are allowed to declare a pointer variable of abstract class

*/



class Car:public Vehicle
{
	int cprice;
	char cname[100];

	public:
	 void acc();
	void display();

};

void Car::acc()
{
	cout<<"\n Enter the Car price:";
	cin>>cprice;

	cout<<"\n Enter the brand name:";
	cin.ignore();
	cin.getline(cname,100);

}
void Car::display()
{
	cout<<"\n The Car price is "<<cprice<<" and brand is "<<cname;

}



class Bike:public Vehicle
{
	int bprice;
	char bname[100];

	public:
	 void acc();
	void display();

};

void Bike::acc()
{
	cout<<"\n Enter the Bike price:";
	cin>>bprice;

	cout<<"\n Enter the brand name:";
	cin.ignore();
	cin.getline(bname,100);

}
void Bike::display()
{
	cout<<"\n The Bike price is "<<bprice<<" and brand is "<<bname;

}

/*
Here Bike and Car both are the direct subclasses of Vehicle. In classes Bike and Car w ehave overridden and provided a body or definition to the acc() and display() pure virtual inherited member functions from superclass Vehicle. So because classes Car and Bike dont contain any pure pure virtual functions, so they are not abstract classes and we are allowed to create objects of classes Car and Bike in the pgm.


*/
void accdisplayVehicle(Vehicle *v1)
{
	v1->acc();
	v1->display();

}
/*
Here accdisplayVehicle() is an independent function. It is having a formal parameter which is a pointer variable of class Vehicle. So when the statement accdisplayVehicle(&b1), runs, the v1->acc() and v1->display() will call the acc() and display() member functions of the b1 object of class Bike which are having a a body or definition.
Similarly during execution of accdisplayVehicle(&c1), the member functions acc() and display() of Car are called.


*/
int main()
{
	
	Bike b1;
	Car c1;

	accdisplayVehicle(&b1);
	accdisplayVehicle(&c1);

	return 0;
}