#include <stdio.h>

int main()
{
    int i,p=0;
    double n,total=0;
    for(i=0;i<6;i++)
    {
        scanf("%lf",&n);
        if(n>0)
        {
            p++;
            total+=n;
        }
    }
    printf("%d valores positivos\n%.1lf\n",p,total/p);
}



