#include <stdio.h>

int main()
{
    #define n 3.14
    double vol,diameter,area,height,r;
    while(scanf("%lf %lf", &vol, &diameter)==2)
    {
        r = diameter/2;
        area = n*r*r;
        height = vol/area;
        printf("ALTURA = %.2lf\nAREA = %.2lf\n",height,area);
    }
    return 0;
}
