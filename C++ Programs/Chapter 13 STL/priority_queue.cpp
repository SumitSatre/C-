#include <iostream>
#include <stdio.h>
#include <queue>
using namespace std;

int main(){
    // max heap
    priority_queue <int> maxi;

    // min heap
    priority_queue <int , vector<int> , greater<int> > mini; 

    // ***** For max ***** //

    maxi.push(13);
    maxi.push(8);
    maxi.push(9);
    maxi.push(54);
    int n = maxi.size();

    for(int i = 0 ; i<n ; i++){
        cout<<maxi.top()<<"  ";
        maxi.pop();
    }
    
    cout<<"\nSize : "<<maxi.size()<<endl;
    cout<<"Empty or not :  "<<maxi.empty()<<endl;

    // ***** For min ***** //
    mini.push(13);
    mini.push(8);
    mini.push(9);
    mini.push(54);
    n = mini.size();

    for(int i = 0 ; i<n ; i++){
        cout<<mini.top()<<"  ";
        mini.pop();
    }
    
    cout<<"\nSize : "<<mini.size()<<endl;
    cout<<"Empty or not :  "<<mini.empty()<<endl;

    return 0;
} 

// Queue : First in First out 