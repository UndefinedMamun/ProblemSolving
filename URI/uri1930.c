#include <stdio.h>

int main()
{
    int i,n,sum=0;
    for(i=1;i<=4;i++)
    {
        scanf("%d",&n);
        sum+=n;
    }
    printf("%d\n",sum-3);
    return 0;
}

