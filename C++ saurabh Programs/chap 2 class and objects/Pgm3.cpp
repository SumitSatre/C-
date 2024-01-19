//accept and display details for multiple employees
#include<iostream>

using namespace std;

class Employee
{
	char ename[100];
	int eid;
	float esalary;

	public:
	void acc_employee();
	void display_employee();

};

void Employee::acc_employee()
{
	cout<<"\n Enter the employee name:";
	cin.ignore();
	cin.getline(ename,100);

	cout<<"\n Enter the employee id:";
	cin>>eid;

	cout<<"\n Enter the employee salary:";
	cin>>esalary;


}

void Employee::display_employee()
{
	cout<<"\n The employee name is "<<ename<<"\n The employee id is "<<eid<<"\n The employee salary is "<<esalary;

}

int main()
{
	Employee *arr1;

	int n,i;

	cout<<"\n Enter for how many employees do you want to store the details. The maximum number is 20:";
	cin>>n;

	arr1=new Employee[n];
/*
new is a keyword in cpp. The above statement will dyanamically allocate RAM memory to n number of objects of class Employee and the base address of the dyanamically allocated 1d array of n objects is stored into arr1 variable. So after execution of above statement arr1 becomes name of the dynamically allocated 1d array containing n objects of class Employee. So because we are storing the base address of the dynamically allocated 1d array of n objects of class Employee into arr1 variable, so arr1 has been declared as a pointer variable of class Employee. So this dyanamic RAM memory allocation for the 1d array of n objects of class Employee helps to save RAM memory.
new is not a predefined function in Cpp but it is a predefined operator in Cpp. The malloc() was a predefined function in Cpp.

*/

	cout<<"\n Enter the details for the "<<n<<" number of employees:";
	for(i=0;i<=n-1;i++)
	{
		arr1[i].acc_employee();

	}

	cout<<"\n The details for the "<<n<<" number of employees are:";
	for(i=0;i<=n-1;i++)
	{
		arr1[i].display_employee();

	}

	delete arr1;
//above statement will deallocate or destroy the RAM memory which was allocated to the 1d array variable arr1.

	return 0;
}