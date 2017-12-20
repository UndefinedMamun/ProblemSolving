#include <stdio.h>

int main()
{
    int n,i,total=0,c=0,r=0,s=0,cn;
    char cc;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d %c",&cn,&cc);
        total+=cn;
        if(cc=='C')
            c+=cn;
        else if(cc=='R')
            r+=cn;
        else if(cc=='S')
            s+=cn;
    }
    printf("Total: %d cobaias\n",total);
    printf("Total de coelhos: %d\n",c);
    printf("Total de ratos: %d\n",r);
    printf("Total de sapos: %d\n",s);
    printf("Percentual de coelhos: %.2lf %%\n",((float)c*100)/total);
    printf("Percentual de ratos: %.2lf %%\n",((float)r*100)/total);
    printf("Percentual de sapos: %.2lf %%\n",((float)s*100)/total);
    return 0;
}
