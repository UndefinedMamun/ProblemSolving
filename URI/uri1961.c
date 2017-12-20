#include <stdio.h>

int main()
{
    int t,n[100],h,i,c;
    scanf("%d %d",&h,&t);
    for(i=0;i<t;i++)
    {
        scanf("%d",&n[i]);
    }
    for(i=1;i<t;i++)
    {
        c=abs(n[i]-n[i-1]);
        if(c>h)
        {
            printf("GAME OVER\n");
            return 0;
        }
    }
    printf("YOU WIN\n");
    return 0;
}


