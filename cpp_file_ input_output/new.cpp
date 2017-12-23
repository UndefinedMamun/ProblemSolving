#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main()
{
    string line,rep="``";
    ifstream file;
    ofstream o;
    o.open("out.txt");
    file.open("in.txt");
    while(getline(file, line))
    {
        size_t pos;
        while(line.find('"') != string::npos)
        {
            pos = line.find('"');
            line.replace(pos,1,rep);
            (rep=="``")?rep="''":rep="``";
        }

        o<<line<<endl;
    }
    return 0;
}
