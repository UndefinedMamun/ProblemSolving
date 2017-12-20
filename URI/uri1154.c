#include <stdio.h>

int main()
{
    int n,sum=0,i=0;
    float avg;
    while(1)
    {
        scanf("%d",&n);
        if(n<0)
            break;
        sum+=n;
        i++;
    }
    avg = (float)sum/i;
    printf("%.2f\n",avg);
    return 0;
}
