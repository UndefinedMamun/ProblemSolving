#include <iostream>
#include <iomanip>
#include <string.h>
#include <fstream>

using namespace std;

int main()
{
    int t,z;
    float r;
    char l;
    string s;
    ifstream file;

    file.open("in.txt");
    file >> t;
    cout <<t<<endl;
    while(t--)
    {
        file >> s;
        z = s.length();
        cout<<'size='<<z<<endl;
        r=z/100.00;
        cout<<fixed<<setprecision(2)<<r<<endl;
    }
    file.close();
    return 0;
}
