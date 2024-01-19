#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    vector <int> v;
    
    v.push_back(3);
    v.push_back(8);
    v.push_back(45);
    v.push_back(23);
    cout<<"Finding 45 in vector"<<binary_search(v.begin() , v.end() , 45)<<endl;

    for(int i:v){
        cout<<i<<"  ";
    }
    return 0;
}