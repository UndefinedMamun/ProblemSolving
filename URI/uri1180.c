#include <stdio.h>

int main()
{
    int x[1000],i,n,s,p;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&x[i]);
    }
    s=x[0];
    for(i=1;i<n;i++)
    {
        if(x[i] < s)
        {
            s=x[i];
            p=i;
        }
    }
    printf("Menor valor: %d\nPosicao: %d\n",s,p);

    return 0;
}
