#include <stdio.h>

int main()
{
    int x,sum=0,t=0;
    scanf("%d",&x);
    while(x!=0)
    {
        while(t!=5)
        {
            if(x%2==0)
            {
                sum+=x;
                t++;
            }
            x++;
        }
        printf("%d\n",sum);
        scanf("%d",&x);
        sum=0;
        t=0;
    }

    return 0;
}
