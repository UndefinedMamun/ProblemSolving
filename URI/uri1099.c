#include <stdio.h>

int main()
{
    int n,i,a,b,j,temp,sum;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d %d",&a,&b);
        sum=0;
        if(b<a)
        {
            temp=a;
            a=b;
            b=temp;
        }
        for(a+=1;a<b;a++)
        {
            if(a%2 != 0)
                sum+=a;
        }
        printf("%d\n",sum);
    }
    return 0;
}
