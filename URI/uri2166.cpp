#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int n;
    double r=0;
    cin>>n;
    while(n--)
        r=(1.00/(2+r));
    cout<<fixed<<setprecision(10)<<1+r<<endl;
    return 0;
}

