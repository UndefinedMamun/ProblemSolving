#include <stdio.h>

int main()
{
    double o,n,i,p;
    scanf("%lf %lf",&o,&n);
    i=n-o;
    p=(i*100)/o;
    printf("%.2lf%%\n",p);
    return 0;
}


