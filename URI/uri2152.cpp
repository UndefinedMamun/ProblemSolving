#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int t,h,m,o;
    cin >> t;
    while(t--)
    {
        cin >> h>>m>>o;
        cout<<setfill('0')<<setw(2)<<h<<":"<<setfill('0')<<setw(2)<<m<<" - ";
        if(o)
            cout << "A porta abriu!\n";
        else
            cout << "A porta fechou!\n";
    }
    return 0;
}
