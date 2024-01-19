/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;

#define USERNAME_LEN    512
#define PASS_LEN        12

template <typename USERINFO>
class user {
private:
    USERINFO *u_array;
    int no_of_elems;
public:
    user();
    bool search(USERINFO elem);
};

template <typename USERINFO>
user<USERINFO>::user() {
    cout<<"Enter number of elements:  ";
    cin>>no_of_elems;

    u_array = new USERINFO[no_of_elems];
    if (!u_array) {
        cout<<"error: failed to allocate memory";
        no_of_elems = 0;
        return;
    }

    for (int i=0; i < no_of_elems; i++) {
        cout<<"Enter element";
        cin>>u_array[i];
    }
}

template <typename USERINFO>
bool user<USERINFO>::search(USERINFO elem) {
    bool ret = false;
    int i;
    for(i=0;i<=no_of_elems-1;i++)
    {
        if(u_array[i]==elem)
        {
            cout<<"\n The element "<<elem<<" is found at location "<<i;
            ret=true;
           return (ret);
        }
    }
    
    return ret;
    
}

int main()
{
   user<int> u1;
   
   
   if(u1.search(5))
   {
       cout<<"\n element found";
       
   }
   
   else
     cout<<"\n element not found";

    return 0;
}