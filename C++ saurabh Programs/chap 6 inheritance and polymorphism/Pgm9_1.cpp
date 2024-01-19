//pgm for pure virtual function
/*
	A
B		C

*/

#include<iostream>
using namespace std;

class Vehicle
{
	

	public:
	virtual void acc()=0;
	virtual void display()=0;

};


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

void accdisplayVehicle(Vehicle *v1)
{
	v1->acc();
	v1->display();

}

int main()
{
	
	Bike b1;
	Car c1;

	accdisplayVehicle(&b1);
	accdisplayVehicle(&c1);

	return 0;
}