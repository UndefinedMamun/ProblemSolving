#include <stdio.h>
int check(int a, int b,int c)
{
    int s;
    s=(a+b+c)/2;
    if(s>a && s>b && s>c)
        return 1;
    else
        return 0;
}

int main()
{
    int t,n[5],s[4],i,sum;
    for(t=0;t<4;t++)
    {
        scanf("%d",&n[t]);
    }
    for(i=0;i<4;i++)
    {
        sum=0;
        for(t=0;t<4;t++)
        {
            if(t!=i)
                s[sum++]=n[t];

        }
        if(check(s[0],s[1],s[2]))
        {
            printf("S\n");
            return 0;
        }

    }
    printf("N\n");
    return 0;
}


