#include <stdio.h>

static unsigned long long int x[1000000];
int main()
{
    unsigned long long int n,i,sum=0,c=0,s=0;
    scanf("%llu",&n);
    for(i=0;i<n;i++)
    {
        scanf("%llu",&x[i]);
        sum+=x[i];
    }
    i=0;
    while(i>=0 && i<n)
    {
        if(i>c)
            c=i;
        if(x[i]!=0)
        {
            if(x[i]%2==0)
                --x[i--];
            else
                --x[i++];
            s++;
        }else
            i--;
    }
    printf("%llu %llu\n",c+1,sum-s);
    return 0;
}

//5007773724
