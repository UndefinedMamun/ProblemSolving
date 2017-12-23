#include <iostream>
#include <string>

using namespace std;

int main()
{
    string line;
    string store="WERTYUIOP[]\\SDFGHJKL;,'XCVBNM,./1234567890-=";
    string right="QWERTYUIOP[]ASDFGHJKLM;ZXCVBNM,.`1234567890-";
    while(getline(cin, line))
    {
        for(string::iterator i = line.begin(); i!=line.end(); ++i)
        {
            if(*i == ' ')
                cout<<' ';
            else
            {
                size_t pos = store.find(*i);
                cout<<right[pos];
            }
        }
        cout<<endl;
    }
    return 0;
}
