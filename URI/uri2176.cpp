#include <iostream>
using namespace std;

int main()
{
    string s;
    int c=0;
    cin>>s;
    int l=s.length();
    while(l--)
    {
        if(s[l]=='1')
            c++;
    }
    if(c%2==0)
        s.insert(s.end(),'0');
    else
        s.insert(s.end(),'1');
    cout<<s<<"\n";
    return 0;
}
