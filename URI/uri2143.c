#include <stdio.h>

int main()
{
    int i,t,n,d,r,s,o;
    while(1)
    {
        scanf("%d",&t);
        if(t==0)
            break;
        for(i=0;i<t;i++)
        {
            scanf("%d",&n);
            d=n/3;
            if(d%2 != 0) //odd
            {
                if(n%3==1)
                    r=2;
                else
                    r=1;
                s=n-r;
            }
            else //even
            {
                if(n%3==0)
                {
                    r=2;
                    s=n-r;
                } else
                {
                    s=3*d;
                    r=n-s;
                }
            }
            o=(s*2)+r;
            printf("%d\n",o);
        }
    }
    return 0;
}
