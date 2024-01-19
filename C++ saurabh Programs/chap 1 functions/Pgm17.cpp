//inline function

//pgm to define a function for calculating factorial as inline function

#include<iostream>
using namespace std;

inline long int factorial(int);
/*
When we want to define a function as inline, then we use the inline keyword of cpp in the function prototype declaration statement. When a function is not inline, and if compiler treats it as a normal non inline function,when we call the function then the compiler will need to create a separate stack in RAM emory which stores current values of local variables of the calling function in whose body we have called the other function and also compiler needs to store return address of the called function i.e. address of the statement insid ethe calling function to which the control must return back after the execution of the called function is terminated. Then compiler needs to transfer control to called function and then after execution of called function ends() the control returns back to the calling back using return address which it has saved in the stack. SO a lot of execution time and RAM memory area is wasted in calling a normal non iline function.

If a compiler treats a function as inline after we have used inline keyword explicitly in the functio prototype declaration statement, then the compiler will not transfer control to called function definition. But the compiler will directly copy and paste the entire called function definition in the statement where the function has been called. So now there is no need for compiler to create a separate stack area in RAM memory and nor is there a need for the compiler to transfer control. So a lot of execution time is saved for inline functions but the disadvantage with using inline function is that the entire inline function definition, will be copied and pasted where it is called in the pgm. So if the function definition is very large then it may happen that the size of the cpp pgm is increased a lot at compile time because inline function definition is copied and pasted by compiler at compile time at all those places in the pgm where the function is called. So it is generally recommended that only if the function definition is small it is beneficial treating function as inline. Also whether to treat a function as inline or not even after we use inline keyword is dependent and decided by cpp compiler at compile time and if compiler feels that the efficiency of the pgm will be reduced even after it treats the function as inline the  compiler will cnsider the function as a normal non inline function even if we have used inline keyword in the function prototype declaration statement.

*/


int main()
{
	int a;
	
	cout<<"\n Enter number for finding factorial:";
	cin>>a;

	long int f=factorial(a);
	cout<<"\n The factorial of "<<a<<" is "<<f;

	return 0;
}

long int factorial(int b)
{
	int i;
	i=1;
	long int f1=1;

	while(i<=b)
	{
		f1=f1*i;
		i++;
	}

	return f1;

}