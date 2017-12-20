#include <stdio.h>

int main(){
    int n,i;
    double d[4],avg;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%lf %lf %lf",&d[0],&d[1],&d[2]);
        avg = ((d[0]*2)+(d[1]*3)+(d[2]*5))/(2+3+5);
        printf("%.1lf\n",avg);
    }
    return 0;
}
