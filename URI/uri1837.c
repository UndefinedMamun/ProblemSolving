#include <stdio.h>

int main()
{
    int a, b, q, r,t;
    scanf("%d %d",&a, &b);
    q=(a/b);
    t=a;
    while((b*q)>a)
    {
        --t;
        q=t/b;
    }
    r=a-(b*q);
    printf("%d %d\n",q,r);
    return 0;
}
