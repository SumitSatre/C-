/*
pgm to sort 1d array and search for an element in it using dyanaic memory allocation in cpp and pointers

*/

#include<iostream>

using namespace std;

void acc(int *,int);
void display(int *,int);
void sort(int *,int);
void search(int *,int);

int main()
{
	int *arr1,n1;

	cout<<"\n Enter how many integer elements do you want in the array:";
	cin>>n1;

	arr1=new int[n1];

	acc(arr1,n1);

	display(arr1,n1);

	search(arr1,n1);

	sort(arr1,n1);
	cout<<"\n The array after sorting is:";
	display(arr1,n1);

	delete arr1;


	return 0;
}

void acc(int *arr2,int n2)
{
	int i;
	cout<<"\n Enter the "<<n2<<" number of elements of int type to be stored in the array:";

	for(i=0;i<=n2-1;i++)
	{
		cin>>*(arr2+i);
	}

}

void display(int *arr2,int n2)
{
	int i;
	cout<<"\n Enter the "<<n2<<" number of elements of int type to be stored in the array:";

	for(i=0;i<=n2-1;i++)
	{
		cout<<*(arr2+i)<<" ";
	}

}


void sort(int *arr2,int n2)
{
	int i,j,temp;
	
	for(i=0;i<=n2-1;i++)
	{
		for(j=i+1;j<=n2-1;j++)
		{
			if(*(arr2+i)>*(arr2+j))
			{
				temp=*(arr2+i);
				*(arr2+i)=*(arr2+j);
				*(arr2+j)=temp;

			}
		}
	}

}


void search(int *arr2,int n2)
{
	int i,ele;
	
	cout<<"\n Enter element to be searched:";
	cin>>ele;

	for(i=0;i<=n2-1;i++)
	{
		if(*(arr2+i)==ele)
		{
			cout<<"\n element found at index "<<i;
			break;

		}
	}

	if(i==n2)
	cout<<"\n Element not found";

}
