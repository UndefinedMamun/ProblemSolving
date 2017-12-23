#include <stdio.h>

int main()
{
    int n,i,m[101],s=100;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&m[i]);
        if(m[i]<s)
            s=m[i];
    }
    for(i=1;i<=n;i++)
    {
        if(s==m[i])
        {
            printf("%d\n",i);
            break;
        }
    }
    return 0;
}
