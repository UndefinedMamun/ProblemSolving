#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    unsigned long long int num;
    double e,c;
    cin >> num;
    while(num!=0)
    {
        c=(double)num/10;
        num=num/10;
        e=c-num;
        cout << setprecision(0) << (e*10);
    }
    cout << endl;
    return 0;
}
