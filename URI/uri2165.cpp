#include <iostream>
using namespace std;

int main()
{
    string str;
    getline(cin,str);
    if(str.length()>140)
        cout<<"MUTE\n";
    else
        cout<<"TWEET\n";
    return 0;
}
