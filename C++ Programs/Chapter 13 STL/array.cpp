#include <iostream>
#include <stdio.h>
#include <array>
using namespace std;

int main(){
    array <int , 5> arr = {1,2,3,4,5};
    int size = arr.size();

    for(int i = 0 ; i<size ; i++){
        cout<<arr[i] <<endl;
    }

    cout<<"Front element is : "<<arr.front()<<endl;
    cout<<"Last element is : "<<arr.back()<<endl;

    cout<<"Empty or not :  "<<arr.empty()<<endl;
    return 0;
}