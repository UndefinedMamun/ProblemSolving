
#include <stdio.h>

int main()
{
    int i=1,j=7,k=5;
    while(i<=9)
    {
        for(j;j>=k;j--)
            printf("I=%d J=%d\n",i,j);
        i+=2;
        j+=5;
        k+=2;
    }
    return 0;
}

