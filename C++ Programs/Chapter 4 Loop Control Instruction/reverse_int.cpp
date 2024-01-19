#include <iostream>
#include <stdio.h>
using namespace std;

int reverse(int x)
{
    int ans = 0, digit = 0;

    while (x != 0)
    {
        digit = x % 10;

        if (ans > INT_MAX / 10 || ans < INT_MIN / 10)
        {
            return 0;
        }

        ans = digit + ans * 10;
        cout<<ans<<endl;
        cout<<"x : "<<x<<endl;
        x = x / 10;
    }

    return ans;
}

int main()
{
    int number = -2599;

    cout<<reverse(number);
    return 0;
}