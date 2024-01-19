#include <iostream>
#include <math.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number : ";
    cin>>n;

    int ans = 0 , i = 0;

    while(n!=0){
        int bit = n%10;
        ans = (bit*pow(2 , i)) + ans;
        n = n/10;
        i++;
    }
    cout<<"Answer : "<<ans;
    return 0;
}