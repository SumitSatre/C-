#include <iostream>
using namespace std;

int count =0;

class num{
    int a,b,c;;
    public:
    num(){
    cout<<"Enter the two numbers to add : ";
    cin>>a>>b;
    c = a+b;
    count++;
    }

    ~num(){
        cout<<"The addition of object "<<count<<" is "<<c<<endl;
        count--;
    }
};

int main(){
    int n;
    cout<<"Enter the objects do you want for addition : ";
    cin>>n;
    num add[n];

    return 0;
}