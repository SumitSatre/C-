//FUNCTION templates
//define a generic function having 3 template parameters, and having 3 parameters one which is a single pointer //of template type T ,2nd which is a single pointer of type M and 3rd is a single pointer of type N
//Display elements of 1st parameter, find sum of elements of 2nd, and find max for 3rd

#include<iostream>
using namespace std;

template<class T,class M,class N>
void func1(T *arr1,M *arr2,N *arr3,int n1,int n2,int n3)
{
	int i;
	cout<<"\n The elements of 1st array are:";
	for(i=0;i<=n1-1;i++)
	cout<<arr1[i]<<" ";

	M s=0;
	for(i=0;i<=n2-1;i++)
	s=s+arr2[i];

	N max;

	for(i=0;i<=n3-1;i++)
	{
		if(i==0)
		max=arr3[i];

		else
		{
			if(max<arr3[i])
			max=arr3[i];

		}

	}
	


}


int main()
{
	int n1,n2,n3;

	cout<<"\n Enter elements of 1st array of type int whose elements must be displayed:";
	int *arr1;
	cin>>n1;
	arr1=new int[n1];

	cout<<"\n Enter elements of 2nd array of type float whose elements must be displayed:";
	float *arr2;
	cin>>n2;
	arr2=new float[n2];


	cout<<"\n Enter elements of 3rd array of type int whose max must be found:";
	int *arr3;
	cin>>n3;
	arr3=new int[n3];

	func1(arr1,arr2,arr3,n1,n2,n3);

	return 0;
}