#include <iostream>
using namespace std;

int main(){

    int sum=0 , n = 0; 
    cout<<"Enter the number : ";
    cin>>n;

    for (int i = 0 ; i<=n ; i++){
        sum = sum + i;
    }

    cout<<"The sum is : "<<sum<<endl;

    return 0;
}