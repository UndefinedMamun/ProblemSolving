#include <stdio.h>
#include <string.h>

int main()
{
    int i,e=0;
    double n,t;
    scanf("%lf",&n);
    if(n>0)
        t=n;
    else
        t=n*(-1);
    if(!(n>-1 && n<1))
    {
        while(t>=1)
        {
            t=t/10;
            e++;
        }
        n=n/pow(10,--e);
    }
    else
    {
        while(t<1 && t!=0)
        {
            t=t*10;
            e--;
        }
        n=n*pow(10,abs(e));
    }
    printf("%+.4lfE%+03d\n",n,e);
    return 0;
}



