#include <iostream>

using namespace std;

int main()
{
    long long int hArmy, oArmy;
    while(cin>>hArmy>>oArmy)
    {
        if(oArmy>hArmy)
            cout<<oArmy-hArmy<<endl;
        else
            cout<<hArmy-oArmy<<endl;
    }
    return 0;
}
