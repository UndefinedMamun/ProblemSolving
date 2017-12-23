#include <stdio.h>

int main()
{
    int h,m;
    char col;
    while(scanf("%d %c %d",h,m,col)==3)
    {
        printf("%d %d\n",h,m);
    }
    return 0;
}
