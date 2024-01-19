#include <iostream>
#include <stdio.h>
#include <string>
using namespace std;

int main(){
    float  a = 4.55f;           // A float has 7 decimal digits of precision and occupies 32 bits
    double b = 23.44l;          // A double has 15 decimal digits of precision and occupies 64 bits
    long double x = 34.67;      // A long double has more  precision than double 
    int c = 12;
    char d = 'A';
    cout<<a<<endl;
    cout<<b<<endl;

    cout<<"The size of int c is "<<sizeof(c)<<endl;
    cout<<"The size of char d is "<<sizeof(d)<<endl;

    cout<<"The size of 34.4 is "<<sizeof(34.4)<<endl;//It automatically consider it double which has size 8
    cout<<"The size of 34.4f is "<<sizeof(34.4f)<<endl;
    cout<<"The size of 34.4F is "<<sizeof(34.4F)<<endl;
    cout<<"The size of 34.4l is "<<sizeof(34.4l)<<endl;
    cout<<"The size of 34.4L is "<<sizeof(34.4L)<<endl;
    return 0;
}

/* The size of data types in c++ are 
int = 2/4 (Mostly 4)
float =  4 byte           // A float has 7 decimal digits of precision and occupies 32 bits
double = 8 byte            // A double has 15 decimal digits of precision and occupies 64 bits
long double = 16 byte       //A long double has more  precision than double 
char = 1 byte 
*/