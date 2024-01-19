//pgm for virtual function

#include<iostream>
using namespace std;

class Vehicle
{
	char vtype[100],int nwheels;

	public:
	virtual void acc();
	virtual void display();

};

void Vehicle::acc()
{
	cout<<"\n Enter the vehicle type:";
	cin.getline(vtype,100);

	cout<<"\n Enter the no. of wheels:";
	cin>>nwheels;

}
void Vehicle::display()
{
	cout<"\n The vehicle type is "<<vtype<<" and no. of wheels are "<<nwheels;

}


class Car:public Vehicle
{
	int cprice;
	char bname[100];

	public:
	virtual void acc();
	virtual void display();

};

void Car::acc()
{
	cout<<"\n Enter the Car price:";
	cin>>cprice;

	cout<<"\n Enter the brand name:";
	cin.getline(bname,100);

}
void Car::display()
{
	cout<"\n The Car price is "<<cprice<<" and brand is "<<bname;

}



class Innova:public Car
{
	char regno[100];
	int year;
	

	public:
	virtual void acc();
	virtual void display();

};

void Innova::acc()
{
	cout<<"\n Enter the Innova registration number:";
	cin.getline(regno,100);

	cout<<"\n Enter the year of Innova:";
	cin>>year;
}
void Innova::display()
{
	cout<"\n The Innova registration number is "<<regno<<" and year is "<<year;

}



int main()
{
Vehicle v2;
Car c1;
Innova i1;

for(i=1;i<=3;i++)
{
	if(i==1)
	displayVehicle(&v2);

	
	
	else if(i==2)
	displayVehicle(&c1);

	else
	displayVehicle(&i1);

	
}
return 0;
}