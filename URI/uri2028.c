#include <stdio.h>

int main()
{
    int c=1,a,i,j,n;
    while(scanf("%d",&n)==1)
    {
        a=(n*(n+1))/2;
        if(a==0)
            printf("Caso %d: %d numero\n",c,a+1);
        else
            printf("Caso %d: %d numeros\n",c,a+1);
        printf("0");
        for(i=1;i<=n;i++)
        {
            for(j=1;j<=i;j++)
                printf(" %d",i);

        }
        printf("\n\n");
        c++;
    }
    return 0;
}
