#include <stdio.h>

int main()
{
    int a,n,t,sum=0;
    scanf("%d %d",&a,&n);
    while(n<=0)
        scanf("%d",&n);
    t=a+n;
    for(a;a<t;a++)
        sum+=a;
    printf("%d\n",sum);
    return 0;
}
