#include <iostream>
using namespace std;

int main()
{
    int t,n,p,r=0;
    cin>>t;
    cin>>p;
    for(int i=2;i<=t;i++)
    {
        cin>>n;
        if(n<p)
        {
            r=i;
            break;
        }
        p=n;
    }
    cout<<r<<endl;
    return 0;
}
