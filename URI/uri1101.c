#include <stdio.h>

int main()
{
    int m,n,i,temp,sum;
    while(1)
    {
        scanf("%d %d",&m, &n);
        if(m<=0 || n<=0)
            break;
        if(m>n)
        {
            temp = m;
            m=n;
            n=temp;
        }
        sum=0;
        for(m;m<=n;m++)
        {
            printf("%d ",m);
            sum+=m;
        }
        printf("Sum=%d\n",sum);

    }
    return 0;
}
