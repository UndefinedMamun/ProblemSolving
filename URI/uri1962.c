#include <stdio.h>

int main()
{
    int t;
    long long int n;
    scanf("%d",&t);
    for(t;t>=1;t--)
    {
        scanf("%lld",&n);
        if(n<2015)
            printf("%lld D.C.\n",2015-n);
        else
            printf("%lld A.C.\n",n-2014);
    }
    return 0;
}


