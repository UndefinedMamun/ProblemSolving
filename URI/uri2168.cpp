#include <iostream>
using namespace std;

int main()
{
    int ar[101][101],t,i,j,c;
    cin>>t;
    for(i=0;i<=t;i++)
    {
        for(j=0;j<=t;j++)
        {
            cin>>ar[i][j];
        }
    }
    for(i=0;i<t;i++)
    {
        for(j=0;j<t;j++)
        {
            c=0;
            if(ar[i][j]==1)
                c++;
            if(ar[i+1][j]==1)
                c++;
            if(ar[i+1][j+1]==1)
                c++;
            if(ar[i][j+1]==1)
                c++;
            if(c<2)
                cout<<"U";
            else
                cout<<"S";
        }
        cout<<endl;
    }
    return 0;
}
