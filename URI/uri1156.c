#include <stdio.h>

int main()
{
    double i,s=2,gt=1;
    for(i=3.0;i<=39.00;i+=2)
    {
        gt+=i/s;
        s=s*2;
    }
    printf("%.2lf\n",gt);
    return 0;
}
