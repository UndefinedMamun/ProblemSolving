#include <stdio.h>

int main()
{
    int i,index=1,larg,n;
    scanf("%d",&n);
    larg=n;
    for(i=1;i<=99;i++)
    {
        scanf("%d",&n);
        if(n>larg)
        {
            larg=n;
            index=i+1;
        }
    }
    printf("%d\n%d\n",larg,index);
    return 0;
}
