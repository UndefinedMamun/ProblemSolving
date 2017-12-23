#include <stdio.h>
int main()
{
    int n,m,d;
    while(1)
    {
        scanf("%d %d",&n,&m);
        if(n==0 && m==0)
            break;
        d=m-n;

        if(d==7 || d==12 || d==22 || d==52 || d==102 || d==15 || d==25 || d==55 || d==105 || d==30 || d==60 || d==110 || d==70 || d==120 || d==150)
            printf("possible\n");
        else
            printf("impossible\n");
    }
    return 0;
}
