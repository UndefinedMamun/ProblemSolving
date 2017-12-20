#include <iostream>
int x[10000],s[10000][60],r[600000];
bool check(int s,int n)
{
    int i;
    for(i=0; i<s; i++)
    {
        if(r[i]==n)
        {
            return true;
        }
    }
    return false;
}
using namespace std;
int main()
{
    int n,m,q,o,s1,s2;
    cin>>n;
    while(n--)
    {
        cin>>m;
        for(int i=0; i<m; i++)
        {
            cin>>x[i];
            for(int j=0; j<x[i]; j++)
            {
                cin>>s[i][j];
            }
        }

        cin>>q;
        while(q--)
        {

            cin>>o>>s1>>s2;
            --s1;
            --s2;
            if(o==1)//intersection - 1
            {
                int c=0;
                for(int i=0; i<x[s1]; i++)
                {
                    if(check(c,s[s1][i]))
                        continue;
                    for(int j=0; j<x[s2]; j++)
                    {
                        if(s[s1][i]==s[s2][j])
                        {
                            r[c++]=s[s1][i];
                            break;
                        }
                    }
                }
                cout<<c<<"\n";
            }
            else //union - 2
            {
                int c=0;
                for(int i=0; i<x[s1]; i++)
                {
                    if(check(c,s[s1][i]))
                        continue;
                    r[c++]=s[s1][i];
                }
                for(int j=0; j<x[s2]; j++)
                {
                    if(check(c,s[s2][j]))
                        continue;
                    r[c++]=s[s2][j];
                }
                cout<<c<<"\n";
            }
        }
    }
    return 0;
}

