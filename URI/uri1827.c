#include <stdio.h>

int main()
{
    int n,i,ar[101][101],j,s,e,d,z;
    while(scanf("%d",&n)==1)
    {
        s=0;
        e=n-1;
        d=n/3;
        for(i=0; i<=n-1; i++)
        {
            for(j=0; j<=n-1; j++)
            {
                ar[i][j]=0;
            }
            if(i<d)
            {
                ar[i][s++]=2;
                ar[i][e--]=3;
            }else if(i>=(n-d))
            {
                ar[i][--s]=3;
                ar[i][++e]=2;
            }else
            {
                for(z=d;z<n-d;z++)
                    ar[i][z]=1;
            }

        }
        ar[n/2][n/2] = 4;

        for(i=0; i<n; i++)
        {
            for(j=0; j<n; j++)
            {
                printf("%d",ar[i][j]);
            }
            printf("\n");
        }
        printf("\n");
    }
    return 0;
}
