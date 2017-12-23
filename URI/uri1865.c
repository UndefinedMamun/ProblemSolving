#include <stdio.h>
#include <string.h>

int main()
{
    int t,i,v,j,f;
    char s[10],th[10]="Thor";
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%s",s);
        scanf("%d",&v);

        if(strcmp(s,th)==0)
            printf("Y\n");
        else
            printf("N\n");
    }
    return 0;
}
