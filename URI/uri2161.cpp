#include <iostream>
#include <iomanip>

using namespace std;
int main()
{
    int n;
    double c=0;
    cin>>n;
    while(n--)
        c=1.00/(6+c);
    cout<<fixed<<setprecision(10)<<3+c<<endl;
    return 0;
}
