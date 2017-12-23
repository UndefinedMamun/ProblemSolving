#include <iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;
    int i,a,b;
    for(i=1;i<=t;i++)
    {
        int total=0;
        cin>>a>>b;
        if(a%2==0)
            ++a;
        while(a<=b)
        {
            total+=a;
            a+=2;
        }
        cout<<"Case "<<i<<": "<<total<<endl;
    }
    return 0;
}
