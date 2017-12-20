#include <stdio.h>

int main()
{
    int i,n,m=1;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("%d %d %d\n",m,m*m,m*m*m);
        printf("%d %d %d\n",m,(m*m)+1,(m*m*m)+1);
        m++;
    }
    return 0;
}
