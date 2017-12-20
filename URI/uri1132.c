#include <stdio.h>

int main()
{
    int a,b,sum=0,temp;
    scanf("%d",&a);
    scanf("%d",&b);
    if(a>b)
    {
        temp = a;
        a=b;
        b=temp;
    }
    for(a;a<=b;a++)
    {
        if(a%13==0)
            continue;
        sum+=a;
    }
    printf("%d\n",sum);
    return 0;
}
