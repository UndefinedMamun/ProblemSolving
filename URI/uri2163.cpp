#include <iostream>
using namespace std;
int ar[1000][1000];
int main()
{
    int r,c,i,j,n=0,m=0;
    cin >> r >> c;

    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            cin>>ar[i][j];
        }
    }

    for(i=1;i<r-1;i++)
    {
        for(j=1;j<c-1;j++)
        {
            if(ar[i][j]==42 && 7==ar[i][j+1] && 7==ar[i][j-1] && 7==ar[i-1][j] && 7==ar[i-1][j+1] && 7==ar[i+1][j-1] && 7==ar[i+1][j] && 7==ar[i+1][j+1] && 7==ar[i-1][j-1])
            {
                n=i+1;
                m=j+1;
                break;
            }
        }
    }
    cout<<n<<" "<<m<<endl;
    return 0;
}
