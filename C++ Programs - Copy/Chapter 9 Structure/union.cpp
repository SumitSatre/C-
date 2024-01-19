#include <iostream>
#include <string>
using namespace std;

union Employee{
    int salary;
    int id;
};

int main(){
    union Employee e1 ;
    e1.salary = 200000;
    e1.id = 12238 ;

  //  cout<<e1.salary<<endl;
    cout<<e1.id<<endl;
    return 0;
}