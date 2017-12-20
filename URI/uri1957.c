#include <stdio.h>
#include <string.h>

int main()
{
    int t=0,n,i,h[20];
    char hex[20]= {'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};
    scanf("%d",&n);
    while(n!=0)
    {
        h[t++]=n%16;
        n=n/16;

    }
    for(i=t-1; i>=0; i--)
        printf("%c",hex[h[i]]);
    printf("\n");
    return 0;
}



