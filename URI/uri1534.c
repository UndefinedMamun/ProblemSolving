#include <stdio.h>

int main()
{
    int n,i,ar[70][70],j,s,e;
    while(scanf("%d",&n)==1)
    {
        s=0;
        e=n-1;
        for(i=0; i<=n-1; i++)
        {
            for(j=0; j<=n-1; j++)
            {
                ar[i][j]=3;
            }
            if(s!=e)
            {
                ar[i][s++]=1;
                ar[i][e--]=2;
            }else
            {
                ar[i][e--]=2;
                s++;
            }
        }

        for(i=0; i<n; i++)
        {
            for(j=0; j<n; j++)
            {
                printf("%d",ar[i][j]);
            }
            printf("\n");
        }
    }
    return 0;
}
