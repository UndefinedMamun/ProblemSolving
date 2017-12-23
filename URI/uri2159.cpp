#include <iostream>
#include <cmath>
#include <complex>
#include <iomanip>

using namespace std;

int main()
{
    int n;
    double m;
    cin>>n;
    m=n/log(n);
    cout<<fixed<<setprecision(1);
    cout<<m;
    cout<<fixed<<setprecision(1);
    cout<<" "<<1.25506*m<<endl;
    return 0;
}
