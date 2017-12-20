#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int t,num,pa;
    double price[5]={1.50,2.50,3.50,4.50,5.50},sum=0;
    cin >> t;
    for(int i=1;i<=t;i++)
    {
        cin >>num>>pa;
        sum+=pa*price[num-1001];
    }
    cout << fixed;
    cout << setprecision(2) << sum <<endl;
    return 0;
}

