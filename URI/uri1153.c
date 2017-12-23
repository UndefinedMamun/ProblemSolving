#include <stdio.h>

int main()
{
    int n,fact=1;
    scanf("%d",&n);
    for(n;n>=1;n--)
    {
        fact *= n;
    }
    printf("%d\n",fact);
    return 0;
}
