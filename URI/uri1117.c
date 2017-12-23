#include <stdio.h>

int main()
{
    double a=-1,b,avg;
    while(1)
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
        if((avg-(int)avg)==0)
            printf("media = %.0lf\n",avg);
        else
            printf("media = %.2lf\n",avg);
        break;
    }
    return 0;
}
