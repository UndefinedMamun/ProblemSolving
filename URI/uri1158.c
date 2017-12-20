#include <stdio.h>

int main()
{
    int t,i,x,y,sum;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        sum=0;
        scanf("%d %d",&x,&y);
        while(y!=0)
        {
            if(x%2!=0)
            {
                sum+=x;
                --y;
            }
            x++;
        }
        printf("%d\n",sum);
    }
    return 0;
}
