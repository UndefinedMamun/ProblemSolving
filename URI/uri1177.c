#include <stdio.h>

int main()
{
    int n[1000],t,i=0,j;
    scanf("%d",&t);
    while(i<1000)
    {
        for(j=0;j<t;j++)
        {
            n[i]=j;
            i++;
            if(i==1000)
                break;
        }
    }
    for(i=0;i<1000;i++)
        printf("N[%d] = %d\n",i,n[i]);
    return 0;
}
