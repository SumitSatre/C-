#include <iostream>
#include <string>
using namespace std;

struct student_data{
    string name;
    int roll_no;
    int SGPA;
};

class Student{
    public:
    void data_base(){
        struct student_data s[15];
        for(int i=0 ; i<15 ; i++){
            cout<<"Enter the name of the student "<<i+1<<" : "<<endl;
            cin>>s[i].name;

            cout<<"Enter the name of the student "<<i+1<<" : "<<endl;
            cin>>s[i].roll_no;

            cout<<"Enter the name of the student "<<i+1<<" : "<<endl;
            cin>>s[i].SGPA;
        }
    }

    // A function to implement bubble sort
    void bubbleSort(int arr[], int n){
        int i, j;
        for (i = 0; i < n - 1; i++)
    
            // Last i elements are already
            // in place
            for (j = 0; j < n - i - 1; j++)
                if (arr[j] > arr[j + 1]){
                    swap(arr[j], arr[j + 1]);
                    }
    }
    
    // Function to print an array
    void printArray(int arr[], int size){
        int i;
        for (i = 0; i < size; i++)
            cout << arr[i] << " ";
        cout << endl;
    }
};

int main(){
    
    return 0;
}