#include <stdio.h>

int main()
{
    int t,n,h,i,sum;
    scanf("%d",&t);
    for(t;t>=1;t--)
    {
        sum=0;
        scanf("%d",&n);
        h=(n/2)+1;
        for(i=1;i<=h;i++)
        {
            if(n%i==0)
                sum+=i;
        }
        if(sum==n && n!=1)
            printf("%d eh perfeito\n",n);
        else
            printf("%d nao eh perfeito\n",n);
    }
    return 0;
}

