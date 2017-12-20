#include <stdio.h>

int main()
{
    int i,n,m=1;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("%d %d %d PUM\n",m,m+1,m+2);
        m+=4;
    }
    return 0;
}
