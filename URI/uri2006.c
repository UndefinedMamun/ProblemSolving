#include <stdio.h>

int main()
{
    int t,r[6],i,c=0;
    scanf("%d",&t);
    for(i=0;i<5;i++)
    {
        scanf("%d",&r[i]);
        if(t==r[i])
            c++;
    }
    printf("%d\n",c);
    return 0;
}
