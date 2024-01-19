/* There are three types of declaring pointer but first one is preffered
int* j;   (preffered)
int *j;
int * j;
*/

#include <iostream>
#include <stdio.h>
#include <string>
using namespace std;

int main(){
    int i = 8;
    int* j = &i;
    int** k = &j;
    
    cout<<"The value of i is "<<i<<endl;
    cout<<"The value of j is "<<j<<endl;
    cout<<"The value of &i is "<<&i<<endl;
    cout<<"The value of *j is "<<*j<<endl;
    cout<<"The value of &j is "<<&j<<endl;
    cout<<"The value of k is "<<k<<endl;
    cout<<"The value of *k is "<<*k<<endl;            // which is i address stored in j
    cout<<"The value of **k is "<<**k<<endl;          // Which is i value 8

    return 0;
}