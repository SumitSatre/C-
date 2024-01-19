#include <iostream>
#include <string>
using namespace std;

sum(float a,int b,int c){
    return a+b+c;
}

sum(int a,int b){
    return a+b;
}

int main(){
    cout<<"The sum of 4 and 5 is "<<sum(4,5)<<endl;
    cout<<"The sum of 4 , 6 and 5 is "<<sum(4,5,6)<<endl;
    return 0;
}