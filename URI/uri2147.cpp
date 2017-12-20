#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int t;
    float r;
    string s;

    cin >> t;
    while(t--)
    {
        cin >> s;
        r=s.length()/100.00;
        cout<<fixed<<setprecision(2)<<r<<endl;
    }
    return 0;
}
