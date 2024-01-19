#include <iostream>
#include <string>
#include <fstream>
using namespace std;
 
/* The useful classes in the C++ for working with the files are
1. fstreambase
2. ifstream  --> derived by fstream
3. ofstream  --> derived by fstream
*/

int main()
{
    string str;
    string str1 = "You are a great boy 2";

    // ifstream is used for the reading the files (>> = just like cin) 
    ifstream a("sample1.txt");
    getline(a , str);    // a>>str;
    cout<<str;

    // ofstream is used to write in the files (<< = just like cout)
    ofstream b("sample1.txt");
    b<<str1;

    return 0;
}