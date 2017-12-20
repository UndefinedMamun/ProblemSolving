#include <stdio.h>

int main()
{
    int x,y,i,j;
    scanf("%d %d",&x,&y);
    j=x;
    for(i=1;i<=y;i++)
    {
        printf("%d",i);
        if(i==x)
        {
            printf("\n");
            x+=j;
        }
        else
            printf(" ");
    }
    //printf("\n%d",x);
    return 0;
}
