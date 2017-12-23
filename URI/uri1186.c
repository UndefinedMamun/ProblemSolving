#include <stdio.h>

int main()
{
    int i,j,l=0;
    char t;
    double m[12][12],sum=0,avg;
    scanf("%c",&t);
    for(i=0;i<12;i++)
    {
        for(j=0;j<12;j++)
            scanf("%lf",&m[i][j]);

    }
    for(i=1;i<12;i++)
    {
        for(j=11;j>=12-i;j--)
        {
            sum+=m[i][j];
            l++;
        }
    }
    avg = sum/l;
    if(t == 'S')
        printf("%.1lf\n",sum);
    else if(t == 'M')
        printf("%.1lf\n",avg);
    return 0;
}



