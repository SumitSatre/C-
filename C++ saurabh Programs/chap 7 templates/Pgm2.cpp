//pgm to define a template class having 2 template type. This class has a data //member say arr1 having template type T and arr2 having type M. Suppose we want to //find min  element in arr1 and search a value in arr2

#include<iostream>
using namespace std;

template<class T,class M>
class Array1
{
	T *arr1;
	M *arr2;
	int n1,n2;

	public:
	Array1();
	void display();
	T minimum();
	void search();
};


template<class T,class M>
Array1<T,M>::Array1()
{
	cout<<"\n Enter how many values to be stored into array1:";
	cin>>n1;

	arr1=new T[n1];
	cout<<"\n Enter the "<<n1<<" number of values:";
	int i;
	for(i=0;i<=n1-1;i++)
	{
		cin>>arr1[i];

	}
	
	cout<<"\n Enter how many values to be stored into array2:";
	cin>>n2;

	arr2=new M[n2];
	cout<<"\n Enter the "<<n2<<" number of values:";
	
	for(i=0;i<=n2-1;i++)
	{
		cin>>arr2[i];

	}

}

template<class T,class M>
void Array1<T,M>::display()
{
	
	cout<<"\n The "<<n1<<" number of values in 1st array are:";
	int i;
	for(i=0;i<=n1-1;i++)
	{
		cout<<arr1[i]<<",";

	}
	
	cout<<"\n The "<<n2<<" number of values in 2nd array are:";
	
	for(i=0;i<=n2-1;i++)
	{
		cout<<arr2[i]<<",";

	}

}

template<class T,class M>
void Array1<T,M>::search()
{
	
	int i;
	M ele;

	cout<<"\n Enter element to be searched if present or not in 2nd array:";
	cin>>ele;

	for(i=0;i<=n2-1;i++)
	{
		if(arr2[i]==ele)
		{
			cout<<"\n Element is found at inde x"<<i;
			break;

		}

	}

	if(i==n2)
	cout<<"\n Element not found";

}

template<class T,class M>
T Array1<T,M>::minimum()
{
	
	int i;
	T min;
	for(i=0;i<=n1-1;i++)
	{
		if(i==0)
		{
			min=arr1[i];	

		}

		else
		{
			if(min>arr1[i])
			{
				min=arr1[i];

			}

		}
		

	}
	return min;
	
}


int main()
{
	cout<<"\n Processing object with 1st array of type float and 2nd array of type int:";
	Array1<float,int>a1;
//for a1 object we have replaced every occurance of T by float and M by int
	a1.display();
	float m=a1.minimum();
	cout<<"\n The minimum in 1st array is "<<m;
	a1.search();

	

	return 0;
}