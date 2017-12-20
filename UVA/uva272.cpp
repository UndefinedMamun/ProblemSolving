#include <iostream>
#include <string>

using namespace std;

int main()
{
    string line,rep="``";
    while(getline(cin, line))
    {
        size_t pos;
        while(line.find('"') != string::npos)
        {
            pos = line.find('"');
            line.replace(pos,1,rep);
            (rep=="``")?rep="''":rep="``";
        }

        cout<<line<<endl;
    }
    return 0;
}
