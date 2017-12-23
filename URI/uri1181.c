#include <stdio.h>

int main()
{
    int i,j,l;
    char t;
    double m[12][12],sum=0,avg;
    scanf("%d",&l);
    getchar();
    scanf("%c",&t);
    for(i=0;i<12;i++)
    {
        for(j=0;j<12;j++)
            scanf("%lf",&m[i][j]);

    }
    for(i=0;i<12;i++)
        sum+=m[l][i];
    avg = sum/12;
    if(t == 'S')
        printf("%.1lf\n",sum);
    else if(t == 'M')
        printf("%.1lf\n",avg);
    return 0;
}
