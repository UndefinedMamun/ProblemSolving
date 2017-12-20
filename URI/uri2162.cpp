#include <iostream>
using namespace std;

int main()
{
    int t,n,r=1,p,gp=0,gn=0;
    cin>>t;
    cin>>p;
    --t;
    while(t--)
    {
        cin>>n;
        if(p>n)//greater prev
        {
            if(gp)
            {
                r=0;
                break;
            }
            gp=1;
            gn=0;
        }
        else if(p<n)//greater next
        {
            if(gn)
            {
                r=0;
                break;
            }
            gp=0;
            gn=1;
        }
        else
        {
            r=0;
            break;
        }
        p=n;
    }
    cout<<r<<endl;
    return 0;
}
