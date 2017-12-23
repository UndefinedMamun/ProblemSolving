#include <stdio.h>

int main()
{
    int t,n;
    while(scanf("%d %d",&t,&n) == 2)
    {
        if(t==n)
            printf("%d\n",t);
        else
        {
            if(t>n)
                printf("%d\n",t);
            else
                printf("%d\n",n);
        }
    }
    return 0;
}


