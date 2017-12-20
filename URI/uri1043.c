#include <stdio.h>

int main()
{
    double a,b,c,s;
    scanf("%lf %lf %lf",&a, &b, &c);
    s = (a+b+c)/2;
    if(s>a && s>b && s>c)
    {
        printf("Perimetro = %.1lf\n",a+b+c);
    }else
    {
        printf("Area = %.1lf\n", ((a+b)*c)/2);
    }
    return 0;
}




