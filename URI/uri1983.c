#include <stdio.h>

int main()
{
    unsigned long long int num;
    double e,c;
    scanf("%llu",&num);
    while(num!=0)
    {
        c=(double)num/10;
        num=num/10;
        e=c-num;
        printf("%.0lf",(e*10));
    }
    printf("\n");
    return 0;
}
