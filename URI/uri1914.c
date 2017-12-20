#include <stdio.h>
#include <string.h>

int main()
{
    int t,p1,p2;
    char p1n[15],p2n[15],p1c[6],p2c[6];
    scanf("%d",&t);
    for(t;t>=1;t--)
    {
        scanf("%s %s %s %s",p1n,p1c,p2n,p2c);
        scanf("%d %d",&p1,&p2);
        if((p1+p2)%2==0)
        {
            if(!strcmp(p1c,"PAR"))
                printf("%s\n",p1n);
            else
                printf("%s\n",p2n);
        }
        else
        {
            if(!strcmp(p1c,"IMPAR"))
                printf("%s\n",p1n);
            else
                printf("%s\n",p2n);
        }
    }
    return 0;
}


