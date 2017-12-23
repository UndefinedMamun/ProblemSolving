#include <stdio.h>

int main()
{
    int n,i,t;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&t);
        if(t==0)
            printf("NULL\n");
        else if(t%2==0)
        {
            if(t>0)
                printf("EVEN POSITIVE\n");
            else
                printf("EVEN NEGATIVE\n");
        }else
        {
            if(t>0)
                printf("ODD POSITIVE\n");
            else
                printf("ODD NEGATIVE\n");
        }
    }
    return 0;
}
