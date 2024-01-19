#include <iostream>
#include <stdio.h>
#include <set>
using namespace std;

int main(){
    set <int> s;

    s.insert(3);
    s.insert(6);
    s.insert(2);
    s.insert(-7);
    s.insert(78);
    s.insert(89);
    s.insert(3);

    for(int i:s){
        cout<<i<<"  ";
    }
    
    cout<<"\nSize : "<<s.size()<<endl;

    set <int> :: iterator it = s.begin();   /* begin is the function which is pointing to the first 
    element of the set and end is pointiong to the end element of the set */
    it++;
    
    s.erase(it);  // 2 is deleted

    for(int i:s){
        cout<<i<<"  ";
    }
    return 0;
}