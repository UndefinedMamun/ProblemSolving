#include <stdio.h>

int main()
{
    double c,t;
    scanf("%lf",&c);
    if(c>2000 && c<=3000)
    {
        t = (c-2000)*0.08;
    }
    else if(c>3000 && c<=4500)
    {
        t = 1000*0.08;
        t += (c-3000)*0.18;
    }
    else if(c>4500)
    {
        t = 1000*0.08;
        t += 1500*0.18;
        t += (c-4500)*0.28;
    }

    if(c<=2000.00)
    {
        printf("Isento\n");
    }
    else
        printf("R$ %.2lf\n",t);

    return 0;
}


