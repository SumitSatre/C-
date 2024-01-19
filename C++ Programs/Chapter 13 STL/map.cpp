#include <iostream>
#include <stdio.h>
#include <map>
using namespace std;

int main(){
    // Here , first datatype is for the key and second data type is for the value 
    map <int , string> m;

    m[1] = "Sumit";
    m[12] = "Done";
    m[-5] = "Hand";

    m.insert({4 , "King"});

    for(auto i:m){
        cout<<i.first<<endl;
    }
    cout<<endl;

    m.erase(12);

    for(auto i:m){
        cout<<i.first<<endl;
    }
    return 0;
}