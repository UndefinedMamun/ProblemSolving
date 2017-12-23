#include <stdio.h>

int main()
{
    int n,t,i,in=0,out=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&t);
        if(t>=10 && t<=20)
            in++;
        else
            out++;
    }
    printf("%d in\n%d out\n",in,out);
    return 0;
}
