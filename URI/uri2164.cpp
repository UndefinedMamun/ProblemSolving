#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;
int main()
{
    int n;
    double s=sqrt(5),r,l;
    cin>>n;
    l=pow(((1+s)/2),n);
    r=pow(((1-s)/2),n);
    cout<<fixed<<setprecision(1)<<(l-r)/s<<endl;
    return 0;
}
