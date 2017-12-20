#include <iostream>
#include <string>

using namespace std;

int main()
{
    string line;
    while(getline(cin, line))
    {
        for(string::iterator i = line.begin(); i!=line.end(); ++i)
        {
            cout<<char(int(*i)-7);
        }
        cout<<endl;
    }
    return 0;
}
