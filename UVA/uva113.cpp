#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

int main()
{
    double p,n,a;
    while(cin>>p>>n)
    {
        a=pow(n,1/p);
        cout<<fixed<<setprecision(0)<<a<<endl;
    }
    return 0;
}
