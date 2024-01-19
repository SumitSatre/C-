//pgm to find product of 5 formal parameters and based on choice of user you may pass those many input values //into the function call statement. Use default values



#include<iostream>
#include<stdlib.h>

using namespace std;

int product(int a=1,int b=1,int c=1,int d=1,int e=1);

int main()
{
	int option;
	int x,y,z,l,k;

	while(1)
	{
		cout<<"\n Enter how many numbers do you want to multiply...1. 2 numbers   2.3 numbers     3. 4 numbers      4. 5 numbers     5. exit:";
		cin>>option;

		switch(option)
		{
			case 1: cout<<"\n Enter the 2 numbers to be multiplied:";
				cin>>x>>y;
				cout<<"\n The product of the 2 numbers is "<<product(x,y);
				break;

			case 2: cout<<"\n Enter the 3 numbers to be multiplied:";
				cin>>x>>y>>z;
				cout<<"\n The product of the 3 numbers is "<<product(x,y,z);
				break;
			
		
			case 3: cout<<"\n Enter the 4 numbers to be multiplied:";
				cin>>x>>y>>z>>l;
				cout<<"\n The product of the 4 numbers is "<<product(x,y,z,l);
				break;

			case 4: cout<<"\n Enter the 5 numbers to be multiplied:";
				cin>>x>>y>>z>>l>>k;
				cout<<"\n The product of the 5 numbers is "<<product(x,y,z,l,k);
				break;

			case 5: exit(0);
/*
exit(int status) is a predefined function in stdlib.h header file. It will terminate pgm execution manually. Generally when we call exit() function if we pass value 0 it means that the pgm has been manually terminated after getting successful output. But if we pass a non zero value it is generally indicating that the pgm has been terminated after some fault of the user input or some problem in program logic. But in this pgm it will not matter whether we pass 0 or any non zero value to exit() statement.

*/

			default:cout<<"\n Invalid choice";
				
		}

	}

	return 0;
}

int product(int m,int n,int o,int p,int q)
{
	return(m*n*o*p*q);
}