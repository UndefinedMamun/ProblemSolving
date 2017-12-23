#include <stdio.h>

int main()
{
    int n,i,v[500],max;
    while(scanf("%d",&n)==1)
    {
        max=0;
        for(i=0;i<n;i++)
        {
            scanf("%d",&v[i]);
            if(v[i]>max)
                max = v[i];
        }
        if(max<10)
            printf("1\n");
        else if(max>=10 && max<20)
            printf("2\n");
        else
            printf("3\n");
    }
    return 0;
}
