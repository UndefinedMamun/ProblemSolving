#include <stdio.h>

int main()
{
    int i,n,m=1;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("%d %d %d\n",m,m*m,m*m*m);
        m++;
    }
    return 0;
}
