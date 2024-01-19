#include <iostream>
using namespace std;

int main(){
    string s;
    cout<<"Enter the string : ";
    getline(cin , s);
    cout<<"The length of the string is "<<s.length()<<endl;


    for(int i=0 ; i<s.length() ; i++){
        cout<<s.at(i)<<endl;
    }

    int i=0;

    for(int i=0 ; i<s.length() ; i++){
        if(s.at(i)=='a'|| s.at(i)=='e'|| s.at(i)=='i'|| s.at(i)=='o'|| s.at(i)=='u'){
            cout<<"vowel is present that is "<<s.at(i)<<" at the position of "<<i<<endl;
        }
    }
    return 0;
}