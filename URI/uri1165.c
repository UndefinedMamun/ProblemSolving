#include <stdio.h>

int main()
{
    int t,n,h,i,p;
    scanf("%d",&t);
    for(t;t>=1;t--)
    {
        scanf("%d",&n);
        p=0;
        if(n<=1)
        {
            printf("%d nao eh primo\n",n);
            continue;
        }
        else if(n==2)
        {
            printf("%d eh primo\n",n);
            continue;
        }
        else
        {
            h=(n/2)+1;
            for(i=2;i<=h;i++)
            {
                if(n%i==0)
                {
                    printf("%d nao eh primo\n",n);
                    p=1;
                    break;
                }
            }
        }
        if(p==0)
            printf("%d eh primo\n",n);
    }
    return 0;
}
