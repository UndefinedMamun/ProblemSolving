#include <stdio.h>

int main()
{
    int a,b,i,temp,sum=0;
    scanf("%d %d",&a,&b);
    if(b>a)
    {
        temp = a;
        a=b;
        b=temp;
    }
    for(i=b+1;i<a;i++)
    {
        if(i%2!=0)
            sum+=i;
    }
    printf("%d\n",sum);
    return 0;
}




