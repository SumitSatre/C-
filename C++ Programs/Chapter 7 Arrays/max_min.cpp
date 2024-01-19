#include <iostream>
using namespace std;

int main(){

    int arr[] = {5,4,48,45,48,956,3,4,4,84,641,21,4,61,14,5};

    int length = sizeof(arr) / sizeof(int) , max = INT_MIN , min = INT_MAX;

    for(int i = 0 ; i < length ; i++){
        if(max < arr[i]){
            max = arr[i];
        }

        if(min > arr[i]){
            min = arr[i];
        }
    }

    cout<<"Max is : "<<max<<endl<<"Min is : "<<min<<endl;

    return 0;
}