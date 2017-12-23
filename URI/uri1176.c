#include <stdio.h>

int main()
{
    int i,t,n;
    unsigned long long int f[61]={0,1};
    for(i=2;i<=60;i++)
    {
        f[i] = f[i-1] + f[i-2];
    }
    scanf("%d",&t);
    for(t;t>=1;t--)
    {
        scanf("%d",&n);
        printf("Fib(%d) = %llu\n",n,f[n]);
    }
    return 0;
}
