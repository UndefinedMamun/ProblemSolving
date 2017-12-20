#include <stdio.h>

int main()
{
    int n,a=0,b=1,i,c;
    scanf("%d",&n);
    if(n==1)
    {
        printf("%d\n",a);
        return;
    }
    else if(n==2)
    {
        printf("%d\n",b);
        return;
    }else
        printf("%d %d ",a,b);
    for(i=3;i<n;i++)
    {
        printf("%d ",c=a+b);
        a=b;
        b=c;
    }
    printf("%d\n",a+b);
    return 0;
}
