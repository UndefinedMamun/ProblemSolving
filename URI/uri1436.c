#include <stdio.h>

int main()
{
    int n,i,ar[100][100],j,k,s;
    scanf("%d",&n);

    while(n!=0)
    {

        for(i=0; i<=n-1; i++)
        {
            s=1;
            for(j=i; j<=n-1; j++)
            {
                ar[i][j]=s++;
            }
            s=i+1;
            for(k=0; k<i; k++)
                ar[i][k]=s--;
        }

        for(i=0; i<n; i++)
        {
            for(j=0; j<n; j++)
            {
                if(j==0)
                    printf("%3d",ar[i][j]);
                else
                    printf(" %3d",ar[i][j]);

            }
            printf("\n");
        }
        printf("\n");
        scanf("%d",&n);
    }
    return 0;
}

