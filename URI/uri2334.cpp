#include <iostream>
#include <iomanip>
#include <string.h>
#include <fstream>
#include <limits>

using namespace std;

int main()
{
    unsigned long long int p = std::numeric_limits<unsigned long long int>::max();
    while(cin>>p && p != -1)
    {
        if(p>0)
        {
            cout<<p-1;
        }
        else
            cout<<0;
        cout<<"\n";
    }

    return 0;
}
