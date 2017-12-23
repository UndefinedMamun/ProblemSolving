#include <stdio.h>

int main()
{
    int s,t,f,a;
    scanf("%d %d %d",&s,&t,&f);
    a=s+t+f;
    if(a>=24)
        a=a-24;
    else if(a<0)
        a=24+a;
    printf("%d\n",a);
    return 0;
}
