#include <stdio.h>
#include <string.h>
static unsigned long long int x[1000000];
int main()
{
    unsigned long long int n,i,sum=0,c,s=0;
    //scanf("%llu",&n);
    n=1000000;
    for(i=0;i<n;i++)
    {
        x[i]=1000000;
        sum+=x[i];
        printf("%llu %llu\n",x[i],i+1);
    }
    printf("%llu\n",sum);
    return 0;
}
