#include <stdio.h>

int main()
{
    int par[5],e=0,o=0,impar[5],i,t,j;
    for(i=0;i<15;i++)
    {
        scanf("%d",&t);
        if(t%2==0)
        {
            if(e==5)
            {
                e=0;
                for(j=0;j<5;j++)
                    printf("par[%d] = %d\n",j,par[j]);
            }
            par[e]=t;
            e++;
        }else
        {
            if(o==5)
            {
                o=0;
                for(j=0;j<5;j++)
                    printf("impar[%d] = %d\n",j,impar[j]);
            }
            impar[o]=t;
            o++;
        }

    }
    for(j=0;j<o;j++)
            printf("impar[%d] = %d\n",j,impar[j]);
    for(j=0;j<e;j++)
            printf("par[%d] = %d\n",j,par[j]);
    return 0;
}
