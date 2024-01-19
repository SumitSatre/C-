// factorial
// 5! = 5*4*3*2*1

#include <iostream>
#include <string>
using namespace std;

int main(){

    int i , mul=1 , n;

    cout<<"Enter the number : ";
    cin>>n;

    for(i=1,mul ; i<=n ; i++){
        mul = mul*i;
    }

    cout<<"The factorial of "<<n<<" is "<<mul;
    return 0;
}
