//pgm for virtual function

#include<iostream>
using namespace std;

class Vehicle
{
	char vtype[100];
	int nwheels;

	public:
	virtual void acc();
	virtual void display();

};
/*
virtual is a keyword in cpp. 

*/
void Vehicle::acc()
{
	cout<<"\n Enter the vehicle type:";
	cin.getline(vtype,100);

	cout<<"\n Enter the no. of wheels:";
	cin>>nwheels;

}
void Vehicle::display()
{
	cout<<"\n The vehicle type is "<<vtype<<" and no. of wheels are "<<nwheels;

}


class Car:public Vehicle
{
	int cprice;
	char bname[100];

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
	cin.getline(bname,100);

}
void Car::display()
{
	cout<<"\n The Car price is "<<cprice<<" and brand is "<<bname;

}



class Innova:public Car
{
	char regno[100];
	int year;
	

	public:
	 void acc();
	 void display();

};

void Innova::acc()
{
	
	cout<<"\n Enter the Innova registration number:";
	cin.ignore();
	cin.getline(regno,100);

	cout<<"\n Enter the year of Innova:";
	cin>>year;
}
void Innova::display()
{
	cout<<"\n The Innova registration number is "<<regno<<" and year is "<<year;

}


void accdisplayVehicle(Vehicle *v1)
{
    v1->acc();
    v1->display();
}

/*
Here we have declared v1 pointer variable as the formal parameter of the accdisplayVehicle(). Vehicle is topmost superclass in this pgm. 

Suppose v1 pointer variable is storing the address of object of class Car. So when the statement v1->acc() and v1->display() execute, the cpp compiler at compile time checks what is class type of pointer variable v1 and then it will check whether class Vehicle which is class type of v1 has member functions called acc() and display() which are public and non parameterised. So because Vehicle class has public and non parameterised member functions acc() and display(), we dont get any error for the statements v1->acc() and v1->display().

At runtime, again cpp compiler will chck what is class type of v1 pointer variable when it is executing the v1->acc() and v1->display(). Then cpp compiler will check if the class Vehicle has acc() and display() marked as virtual. If no, then cpp compiler will only call acc() and display() based on class type of v1 i.e. Vehicle. If the acc() and display() are defined as virtual in class Vehicle then compiler will check what is address of object stored in v1 and based on class type of object stored in v1, v1->acc() and v1->display() call acc() and display() member functions of class type of object which v1 is pointing to. 

*/

int main()
{
Vehicle v2;
Car c1;
Innova i1;
int i;
for(i=1;i<=3;i++)
{
	if(i==1)
	   accdisplayVehicle(&v2);


	
	
	else if(i==2)
	accdisplayVehicle(&c1);

	else
	accdisplayVehicle(&i1);

	
}

/*
In Cpp, we are allowed to assign address of object of subclass to pointer variable of superclass. So each time the above for loop runs, based on the value of i variable we are calling accdisplayVehicle() independent function and passing it address of Vehicle object v2 or Car object c1 or Innova object i1.

*/
return 0;
}