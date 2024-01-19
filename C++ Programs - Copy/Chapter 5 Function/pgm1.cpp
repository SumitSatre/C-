#include <iostream>
#include <string>
using namespace std;

int sum(int a, int b);

int main(){
    cout<<"The sum is "<<sum(4,6);
    return 0;
}

int sum(int a, int b){
    int c;
    c=a+b;
    return c;
}