#include <iostream>

using namespace std;
int main()
{
    int t,b,a1,a2,d1,d2,l1,l2;
    double v1,v2;
    cin>>t;
    while(t--)
    {
        cin>>b;
        cin>>a1>>d1>>l1;
        cin>>a2>>d2>>l2;
        v1=(a1+d1)/2;
        v2=(a2+d2)/2;
        if(l1%2==0)
            v1+=b;
        if(l2%2==0)
            v2+=b;
        if(v1==v2)
            cout<<"Empate\n";
        else if(v1>v2)
            cout<<"Dabriel\n";
        else
            cout<<"Guarte\n";
    }

    return 0;
}
