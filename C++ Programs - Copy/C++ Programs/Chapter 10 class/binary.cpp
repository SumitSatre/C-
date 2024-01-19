#include <iostream>   
#include <string>   
using namespace std;

class binary{
    private:
    int z=0;
    string a;                 

    public:
    void get();
    void check();
    void display();
    void ones_compliment();
};

void binary :: get(){
    cout<<"\nEnter the binary number : ";
    cin>>a;
}

void binary :: check(){
    for(int i=0 ; i<a.length() ; i++){
        if(a.at(i)=='0' || a.at(i)=='1'){
        }
        else{
            z=1;
            break;
        }
    }
}

void binary :: display(){
    if(z==0){
        cout<<"\nThe binary number is "<<a<<endl;
    }
    else if(z==1){
        cout<<"\nThis is not binary number .";
    }
}

void binary :: ones_compliment(){

    if(z==0){
        for(int i=0 ; i<a.length() ; i++){
            if(a.at(i)=='0'){
                a.at(i)='1';
            }
            else if(a.at(i)=='1'){
                a.at(i)='0';
            }
        }
        cout<<"The ones compliment of binary number is "<<a<<endl;
    }
    else if(z==1){
    }
} 

int main(){
    int n;
    cout<<"Enter the binary numbers you want : ";
    cin>>n;
    binary b[n];

    for(int i=0 ; i<n ; i++){
        b[i].get();
        b[i].check();
        b[i].display();
        b[i].ones_compliment(); 
    }
    return 0;
}