#include <stdio.h>

int main()
{
    double i,s=0;
    for(i=1.0;i<=100.0;i+=1)
        s+=1/i;

    printf("%.2lf\n",s);
    return 0;
}
