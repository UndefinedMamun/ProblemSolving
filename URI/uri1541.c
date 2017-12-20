#include <stdio.h>

int main()
{
    int a,b,c,r;
    while(1)
    {
        scanf("%d",&a);
        if(a==0)
            break;
        scanf("%d",&b);
        scanf("%d",&c);
        r=sqrt(((a*b)*100)/c);
        printf("%d\n",r);
    }
    return 0;
}
