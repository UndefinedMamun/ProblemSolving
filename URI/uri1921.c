#include <stdio.h>

int main()
{
    long long int n,s;
    scanf("%lld",&n);
    if(n%2==0)
        s=(n-3)*(n/2);
    else
    {
        n=n-1;
        s=((n-3)*(n/2))+n-1;
    }
    printf("%lld\n",s);
    return 0;
}
