#include <stdio.h>

int main()
{
    int x,z,sum=0,r=0;
    scanf("%d",&x);
    scanf("%d",&z);
    while(z<=x)
        scanf("%d",&z);
    while(1)
    {
        sum+=x;
        x++;
        r++;
        if(sum>z)
            break;
    }
    printf("%d\n",r);
    return 0;
}
