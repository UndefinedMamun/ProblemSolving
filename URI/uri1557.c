#include <stdio.h>

int main()
{
    int n,i,ar[100][100],j,k,s,t,r;
    scanf("%d",&n);

    while(n!=0)
    {
        s=1;
        t=0;
        for(i=0; i<=n-1; i++)
        {
            for(j=0; j<=n-1; j++)
            {
                ar[i][j]=s;
                s=s*2;
            }
            s=ar[i][1];

        }
        k=ar[n-1][n-1];
        while(k!=0)
        {
            k=k/10;
            t++;
        }
        for(i=0; i<n; i++)
        {
            for(j=0; j<n; j++)
            {
                if(j==0)

                    printf("%*d",t,ar[i][j]);
                else
                    printf(" %*d",t,ar[i][j]);

            }
            printf("\n");
        }
        printf("\n");
        scanf("%d",&n);
    }
    return 0;
}


