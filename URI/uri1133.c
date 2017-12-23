#include <stdio.h>

int main()
{
    int a,b,temp;
    scanf("%d",&a);
    scanf("%d",&b);
    if(a>b)
    {
        temp = a;
        a=b;
        b=temp;
    }
    for(a+=1;a<b;a++)
    {
        if(a%5==2 || a%5==3)
            printf("%d\n",a);
    }

    return 0;
}
