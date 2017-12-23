#include <stdio.h>

int main()
{
    double s,i;
    int p;
    scanf("%lf",&s);
    if(s<=400.00)
        p=15;
    else if(s<=800.00)
        p=12;
    else if(s<=1200.00)
        p=10;
    else if(s<=2000.00)
        p=7;
    else
        p=4;

    i=s*((float)p/100);

    printf("Novo salario: %.2lf\nReajuste ganho: %.2lf\nEm percentual: %d %%\n",s+i, i, p);

    return 0;
}

