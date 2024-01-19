//pgm to use call by reference and find volume and area of sphere by accepting radius of sphere

#include<iostream>
#include<math.h>
#define PI 3.142
using namespace std;

void accradius(float &);
//call by reference
void calvolume(float,float &);
void calarea(float,float &);
void displayarea(float);
void displayvolume(float);

int main()
{
	float radius,volume,area;

	accradius(radius);
	calvolume(radius,volume);
	calarea(radius,area);

    displayvolume(volume);
    displayarea(area);


	return 0;
}

void accradius(float &r1)
{
	cout<<"\n Enter radius:";
	cin>>r1;

}


void calvolume(float r1,float &v1)
{
	v1=(4.0/3)*PI*pow(r1,3);
	
}

void calarea(float r1,float &a1)
{
	a1=4*PI*(r1*r1);
	
}

void displayvolume(float v2)
{
    cout<<"\n The volume is "<<v2;
}

void displayarea(float a2)
{
    cout<<"\n The area is "<<a2;
}