#include <stdio.h>

int main()
{
    int n,i,ar[100][100],j,h,k,s,e;
    scanf("%d",&n);

    while(n!=0)
    {
        h = n%2==0 ? (n/2) : (n/2)+1;
        e=n-1;
        s=0;
        for(k=1; k<=h; k++)
        {
            for(i=s; i<=e; i++)
            {
                for(j=s; j<=e; j++)
                {
                    ar[i][j]=k;
                }
            }
            s++;
            e--;

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
