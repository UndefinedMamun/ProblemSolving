#include <iostream>
using namespace std;

int main()
{
    string str;
    getline(cin,str);
    if(str.length()>80)
        cout<<"NO\n";
    else
        cout<<"YES\n";
    return 0;
}
