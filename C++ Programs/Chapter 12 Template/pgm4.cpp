#include <iostream>
using namespace std;
template <class T1 , class T2>

void division(T1 a, T2 b)
{
    cout << "The division is " << (float)a / b << endl;
}

template <class T1 , class T2>

void swapp(T1 x , T2 y){
    T1 temp;
    temp = x;
    x= y;
    y = temp;
}

int main(){
    division(5.3, 2);

    int a=5 , b=9;
    swapp(a,b);
    cout<<a<<endl<<b<<endl;
    return 0;
}