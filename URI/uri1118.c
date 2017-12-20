#include <stdio.h>

int main()
{
    double a=-1,b,avg;
    int t=1;
    while(t!=2)
    {
        if(a<0 || a>10)
            scanf("%lf",&a);
        if(a<0 || a>10)
        {
            printf("nota invalida\n");
            continue;
        }
        scanf("%lf",&b);
        if(b<0 || b>10)
        {
            printf("nota invalida\n");
            continue;
        }
        avg = (a+b)/2;
        printf("media = %.2lf\n",avg);
        while(1)
        {
            printf("novo calculo (1-sim 2-nao)\n");
            scanf("%d",&t);
            if(t==1 || t==2)
                break;
        }
        a=-1;
    }
    return 0;
}

